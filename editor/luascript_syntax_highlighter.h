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

#pragma once

#include "scene/gui/text_edit.h"

class LuaScriptSyntaxHighlighter : public SyntaxHighlighter {

public:
	LuaScriptSyntaxHighlighter();
	~LuaScriptSyntaxHighlighter();

	static SyntaxHighlighter *create();

	virtual void _update_cache();
	virtual Map<int, TextEdit::HighlighterInfo> _get_line_syntax_highlighting(int p_line);

	virtual String get_name() const;
	virtual List<String> get_supported_languages();

private:
	Color completion_background_color;
	Color completion_selected_color;
	Color completion_existing_color;
	Color completion_font_color;
	Color caret_color;
	Color caret_background_color;
	Color line_number_color;
	Color font_color;
	Color font_selected_color;
	Color keyword_color;
	Color number_color;
	Color function_color;
	Color member_variable_color;
	Color selection_color;
	Color mark_color;
	Color breakpoint_color;
	Color code_folding_color;
	Color current_line_color;
	Color line_length_guideline_color;
	Color brace_mismatch_color;
	Color word_highlighted_color;
	Color search_result_color;
	Color search_result_border_color;
	Color symbol_color;
	Color background_color;
};
