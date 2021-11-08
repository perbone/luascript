/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2021 Paulo Perbone
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

#include "luascript_editor_syntax_highlighter.h"
#include "../constants.h"
#include "../debug.h"

LuaScriptEditorSyntaxHighlighter::LuaScriptEditorSyntaxHighlighter() {
	print_debug("LuaScriptEditorSyntaxHighlighter::constructor");
}

LuaScriptEditorSyntaxHighlighter::~LuaScriptEditorSyntaxHighlighter() {
	print_debug("LuaScriptEditorSyntaxHighlighter::destructor");
}

Dictionary LuaScriptEditorSyntaxHighlighter::_get_line_syntax_highlighting_impl(int p_line) {
	print_debug("LuaScriptEditorSyntaxHighlighter::_get_line_syntax_highlighting_impl( p_line = %d )", p_line);

	return Dictionary{};
} // TODO

void LuaScriptEditorSyntaxHighlighter::_clear_highlighting_cache() {
	print_debug("LuaScriptEditorSyntaxHighlighter::_clear_highlighting_cache");
} // TODO

void LuaScriptEditorSyntaxHighlighter::_update_cache() {
	print_debug("LuaScriptEditorSyntaxHighlighter::_update_cache");
} // TODO

String LuaScriptEditorSyntaxHighlighter::_get_name() const {
	print_debug("LuaScriptEditorSyntaxHighlighter::_get_name");

	return LUA_NAME;
}

Array LuaScriptEditorSyntaxHighlighter::_get_supported_languages() const {
	print_debug("LuaScriptEditorSyntaxHighlighter::_get_supported_languages");

	Array supported_languages;
	supported_languages.push_back(LUA_TYPE);

	return supported_languages;
}

Ref<EditorSyntaxHighlighter> LuaScriptEditorSyntaxHighlighter::_create() const {
	print_debug("LuaScriptEditorSyntaxHighlighter::_create");

	Ref<LuaScriptEditorSyntaxHighlighter> editor_syntax_highlighter{};
	editor_syntax_highlighter.instantiate();

	return editor_syntax_highlighter;
}
