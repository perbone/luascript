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

#include "antlr_tree_walker.h"

#include "../generated/LuaLexer.h"

#include <vector>

namespace parser::ast {

AntlrTreeWalker::AntlrTreeWalker() {
}

AntlrTreeWalker::~AntlrTreeWalker() {
}

std::unique_ptr<AbstractSyntaxTree> AntlrTreeWalker::walk(const std::string_view chunk) {
	antlr4::ANTLRInputStream input(chunk);
	generated::LuaLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	generated::LuaParser parser(&tokens);

	this->methods = Methods{};

	antlr4::tree::ParseTree *chunk_tree = parser.chunk();
	antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, chunk_tree);
	parser.reset();

	return std::make_unique<AbstractSyntaxTree>(std::move(this->methods), true);
}

void AntlrTreeWalker::exitStatFunction(generated::LuaParser::StatFunctionContext *ctx) {
	std::vector<antlr4::tree::TerminalNode *> names = ctx->funcname()->NAME();
	auto token = names[ctx->funcname()->NAME().size() - 1]->getSymbol();

	this->methods.push_back(Method{ token->getText(), token->getLine(), token->getCharPositionInLine() + 1 });
}

} // namespace parser::ast