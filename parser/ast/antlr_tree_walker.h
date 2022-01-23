/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2022 Paulo Perbone
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

#include "tree_walker.h"

#include "../generated/LuaBaseListener.h"

#include <string_view>

namespace parser::ast {

class AntlrTreeWalker : public TreeWalker, generated::LuaBaseListener {
public:
	AntlrTreeWalker();
	~AntlrTreeWalker();

	[[nodiscard]] AST walk(const std::string_view chunk) override;

	void exitStatFunction(generated::LuaParser::StatFunctionContext *ctx) override;

private:
	Methods methods;
};

} // namespace parser::ast