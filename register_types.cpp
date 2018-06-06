/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2018 Paulo Perbone
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

#include "luascript.h"

#ifdef TOOLS_ENABLED
#include "editor/luascript_syntax_highlighter.h"
#include "editor/plugins/script_editor_plugin.h"
#endif

LuaScriptLanguage *script_language = nullptr;
LuaScriptResourceFormatLoader *resource_loader = nullptr;
LuaScriptResourceFormatSaver *resource_saver = nullptr;

void register_luascript_types() {

	ClassDB::register_class<LuaScript>();

	script_language = memnew(LuaScriptLanguage);
	ScriptServer::register_language(script_language);

	resource_loader = memnew(LuaScriptResourceFormatLoader);
	ResourceLoader::add_resource_format_loader(resource_loader);

	resource_saver = memnew(LuaScriptResourceFormatSaver);
	ResourceSaver::add_resource_format_saver(resource_saver);

#ifdef TOOLS_ENABLED
	ScriptEditor::register_create_syntax_highlighter_function(LuaScriptSyntaxHighlighter::create);
#endif
}

void unregister_luascript_types() {

	ScriptServer::unregister_language(script_language);

	if (script_language)
		memdelete(script_language);
	if (resource_loader)
		memdelete(resource_loader);
	if (resource_saver)
		memdelete(resource_saver);
}
