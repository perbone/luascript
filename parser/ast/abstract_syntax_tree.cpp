/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2023 Paulo Perbone
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

#include "abstract_syntax_tree.h"

namespace parser::ast {

AbstractSyntaxTree::AbstractSyntaxTree(Methods &&methods, bool valid) :
		methods{ methods },
		valid{ valid } {
}

AbstractSyntaxTree::~AbstractSyntaxTree() {
}

Methods AbstractSyntaxTree::get_methods() const {
	return this->methods;
}

bool AbstractSyntaxTree::is_valid() {
	return this->valid;
}

} // namespace parser::ast
