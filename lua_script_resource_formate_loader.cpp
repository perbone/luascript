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

#include "lua_script_resource_formate_loader.h"
#include "constants.h"
#include "debug.h"
#include "lua_script.h"

LuaScriptResourceFormatLoader::LuaScriptResourceFormatLoader() {
	print_debug("LuaScriptResourceFormatLoader::constructor");
}

LuaScriptResourceFormatLoader::~LuaScriptResourceFormatLoader() {
	print_debug("LuaScriptResourceFormatLoader::destructor");
}

Ref<Resource> LuaScriptResourceFormatLoader::load(const String &p_path, const String &p_original_path, Error *r_error) {
	print_debug("LuaScriptResourceFormatLoader::load( p_path = " + p_path + ", p_original_path = " + p_original_path + " )");

	LuaScript *script = memnew(LuaScript);

	if (!script) {
		if (r_error)
			*r_error = ERR_OUT_OF_MEMORY;
		return nullptr;
	}

	script->set_path(p_original_path);

	Error error = script->load_source_code(p_original_path);

	if (error != OK) {
		if (r_error)
			*r_error = error;
		memdelete(script);
		return nullptr;
	}

	error = script->reload();

	if (error != OK) {
		if (r_error)
			*r_error = error;
		memdelete(script);
		return nullptr;
	}

	return Ref<LuaScript>(script);
}

void LuaScriptResourceFormatLoader::get_recognized_extensions(List<String> *p_extensions) const {
	print_debug("LuaScriptResourceFormatLoader::get_recognized_extensions");

	p_extensions->push_back(LUA_EXTENSION);
}

bool LuaScriptResourceFormatLoader::handles_type(const String &p_type) const {
	print_debug("LuaScriptResourceFormatLoader::handles_type( p_type = " + p_type + " )");

	return (p_type == SCRIPT_TYPE || p_type == LUA_TYPE);
}

String LuaScriptResourceFormatLoader::get_resource_type(const String &p_path) const {
	print_debug("LuaScriptResourceFormatLoader::get_resource_type( p_path = " + p_path + " )");

	return (p_path.get_extension().to_lower() == LUA_EXTENSION) ? LUA_TYPE : EMPTY_STRING;
}
