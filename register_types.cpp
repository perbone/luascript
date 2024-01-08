/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2024 Paulo Perbone
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

#include "debug.h"

#include "lua_script.h"
#include "lua_script_language.h"
#include "lua_script_resource_formate_loader.h"
#include "lua_script_resource_formate_saver.h"

#include "register_types.h"

#ifdef TOOLS_ENABLED
#include "editor/editor_node.h"
#include "editor/luascript_editor_syntax_highlighter.h"

static void _editor_init() {
	print_debug("register_types._editor_init");

	Ref<LuaScriptEditorSyntaxHighlighter> editor_syntax_highlighter{};
	editor_syntax_highlighter.instantiate();
	ScriptEditor::get_singleton()->register_syntax_highlighter(editor_syntax_highlighter);
}
#endif

LuaScriptLanguage *script_language{ nullptr };
Ref<LuaScriptResourceFormatLoader> resource_format_loader{};
Ref<LuaScriptResourceFormatSaver> resource_format_saver{};

void initialize_luascript_module(ModuleInitializationLevel p_level) {
	print_debug("register_types.initialize_luascript_module( p_level = %d )", static_cast<int>(p_level));

	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	GDREGISTER_CLASS(LuaScript);

	if (script_language = memnew(LuaScriptLanguage); script_language)
		ScriptServer::register_language(script_language);

	resource_format_loader.instantiate();
	ResourceLoader::add_resource_format_loader(resource_format_loader);

	resource_format_saver.instantiate();
	ResourceSaver::add_resource_format_saver(resource_format_saver);

#ifdef TOOLS_ENABLED
	EditorNode::add_init_callback(_editor_init);
#endif
}

void uninitialize_luascript_module(ModuleInitializationLevel p_level) {
	print_debug("register_types.uninitialize_luascript_module( p_level = %d )", static_cast<int>(p_level));

	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ResourceSaver::remove_resource_format_saver(resource_format_saver);
	resource_format_saver.unref();

	ResourceLoader::remove_resource_format_loader(resource_format_loader);
	resource_format_loader.unref();

	if (script_language) {
		ScriptServer::unregister_language(script_language);
		memdelete(script_language);
	}
}
