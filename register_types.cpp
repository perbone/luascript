/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2020 Paulo Perbone
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
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

#include "register_types.h"

#include "lua_script.h"
#include "lua_script_language.h"
#include "lua_script_resource_formate_loader.h"
#include "lua_script_resource_formate_saver.h"

#ifdef TOOLS_ENABLED
#include "editor/luascript_syntax_highlighter.h"
#include "editor/plugins/script_editor_plugin.h"
#endif

LuaScriptLanguage *script_language = nullptr;
LuaScriptResourceFormatLoader *resource_loader = nullptr;
LuaScriptResourceFormatSaver *resource_saver = nullptr;

void register_luascript_types() {
	ClassDB::register_class<LuaScript>();

	if (script_language = memnew(LuaScriptLanguage); script_language)
		ScriptServer::register_language(script_language);

	if (resource_loader = memnew(LuaScriptResourceFormatLoader); resource_loader)
		ResourceLoader::add_resource_format_loader(resource_loader);

	if (resource_saver = memnew(LuaScriptResourceFormatSaver); resource_saver)
		ResourceSaver::add_resource_format_saver(resource_saver);

#ifdef TOOLS_ENABLED
	ScriptEditor::register_create_syntax_highlighter_function(LuaScriptSyntaxHighlighter::create);
#endif
}

void unregister_luascript_types() {
	if (resource_saver) {
		ResourceSaver::remove_resource_format_saver(resource_saver);
		//memdelete(resource_saver); // it seems the remove method reclaims the given object memory
	}

	if (resource_loader) {
		ResourceLoader::remove_resource_format_loader(resource_loader);
		// memdelete(resource_loader); // it seems the remove method reclaims the given object memory
	}

	if (script_language) {
		ScriptServer::unregister_language(script_language);
		memdelete(script_language);
	}
}
