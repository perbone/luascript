/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2020 Paulo Perbone
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not  use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License
 */

#include "core/os/os.h"

#include "constants.h"
#include "debug.h"
#include "lua_script.h"
#include "lua_script_resource_formate_saver.h"

LuaScriptResourceFormatSaver::LuaScriptResourceFormatSaver() {
	print_debug("LuaScriptResourceFormatSaver::constructor");
}

LuaScriptResourceFormatSaver::~LuaScriptResourceFormatSaver() {
	print_debug("LuaScriptResourceFormatSaver::destructor");
}

Error LuaScriptResourceFormatSaver::save(const String &p_path, const Ref<Resource> &p_resource, uint32_t p_flags) {
	print_debug("LuaScriptResourceFormatSaver::save( p_path = " + p_path + " )");

	Ref<LuaScript> script = p_resource;

	if (script.is_null())
		return ERR_INVALID_PARAMETER;

	String source = script->get_source_code();

	Error error;
	FileAccess *file = FileAccess::open(p_path, FileAccess::WRITE, &error);

	if (error != OK)
		return error;

	file->store_string(source);
	if (file->get_error() != OK && file->get_error() != ERR_FILE_EOF) {
		memdelete(file);
		return ERR_CANT_CREATE;
	}
	file->close();
	memdelete(file);

	return OK;
}

void LuaScriptResourceFormatSaver::get_recognized_extensions(const Ref<Resource> &p_resource, List<String> *p_extensions) const {
	print_debug("LuaScriptResourceFormatSaver::get_recognized_extensions");

	if (Object::cast_to<LuaScript>(*p_resource)) {
		p_extensions->push_back(LUA_EXTENSION);
	}
}

bool LuaScriptResourceFormatSaver::recognize(const Ref<Resource> &p_resource) const {
	print_debug("LuaScriptResourceFormatSaver::recognize");

	return Object::cast_to<LuaScript>(*p_resource) != nullptr;
}
