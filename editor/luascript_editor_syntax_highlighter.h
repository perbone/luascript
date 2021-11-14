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

#pragma once

#include "editor/plugins/script_editor_plugin.h"

class LuaScriptEditorSyntaxHighlighter : public EditorSyntaxHighlighter {
	GDCLASS(LuaScriptEditorSyntaxHighlighter, EditorSyntaxHighlighter)

public:
	LuaScriptEditorSyntaxHighlighter();
	~LuaScriptEditorSyntaxHighlighter();

	// Overrides from SyntaxHighlighter
	Dictionary _get_line_syntax_highlighting_impl(int p_line) override;
	void _clear_highlighting_cache() override;
	void _update_cache() override;

	// Overrides from EditorSyntaxHighlighter
	String _get_name() const override;
	Array _get_supported_languages() const override;
	Ref<EditorSyntaxHighlighter> _create() const override;
};
