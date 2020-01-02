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

#include "luascript_syntax_highlighter.h"
#include "../constants.h"
#include "../debug.h"

LuaScriptSyntaxHighlighter::LuaScriptSyntaxHighlighter() {
	print_debug("LuaScriptSyntaxHighlighter::constructor");
}

LuaScriptSyntaxHighlighter::~LuaScriptSyntaxHighlighter() {
	print_debug("LuaScriptSyntaxHighlighter::destructor");
}

SyntaxHighlighter *LuaScriptSyntaxHighlighter::create() {
	print_debug("LuaScriptSyntaxHighlighter::create");

	return memnew(LuaScriptSyntaxHighlighter);
}

void LuaScriptSyntaxHighlighter::_update_cache() {
	print_debug("LuaScriptSyntaxHighlighter::_update_cache");

} // TODO

Map<int, TextEdit::HighlighterInfo> LuaScriptSyntaxHighlighter::_get_line_syntax_highlighting(int p_line) {
	const String &line = text_editor->get_line(p_line);
	print_debug("LuaScriptSyntaxHighlighter::_get_line_syntax_highlighting( p_line = %2d, line = " + line, p_line);

	Map<int, TextEdit::HighlighterInfo> lsh_map;

	return lsh_map;
} // TODO

String LuaScriptSyntaxHighlighter::get_name() const {
	print_debug("LuaScriptSyntaxHighlighter::get_name");

	return LUA_NAME;
}

List<String> LuaScriptSyntaxHighlighter::get_supported_languages() {
	print_debug("LuaScriptSyntaxHighlighter::get_supported_languages");

	List<String> supported_languages;
	supported_languages.push_back(LUA_TYPE);
	return supported_languages;
}
