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

#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace parser::ast {

struct Method {
	Method(std::string &&name, size_t line, size_t position) :
			name{ name },
			line{ line },
			position{ position } {}
	Method(const Method &other) = default;
	Method(Method &&other) = default;
	Method &operator=(const Method &rhs) {
		this->name = rhs.name;
		this->line = rhs.line;
		this->position = rhs.position;
		return *this;
	}
	Method &operator=(Method &&rhs) {
		this->name = std::move(rhs.name);
		this->line = rhs.line;
		this->position = rhs.position;
		return *this;
	}
	~Method() = default;

	std::string name;
	size_t line;
	size_t position;
};

using Methods = std::vector<Method>;

class AbstractSyntaxTree {
public:
	AbstractSyntaxTree(Methods &&methods, bool valid = true);
	~AbstractSyntaxTree();

	Methods get_methods() const;
	bool is_valid();

private:
	Methods methods;
	bool valid;
};

using AST = std::unique_ptr<ast::AbstractSyntaxTree>;

}; // namespace parser::ast
