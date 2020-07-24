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

#include "core/ustring.h"

const String EMPTY_STRING = "";
const String SCRIPT_TYPE = "Script";
const String LUA_NAME = "Lua";
const String LUA_TYPE = "LuaScript";
const String LUA_EXTENSION = "lua";
const int LUA_PIL_IDENTATION_SIZE = 2; // Following PiL indenting often uses two spaces
const String LUA_PIL_IDENTATION = "  "; // Keep it in sync with LUA_PIL_IDENTATION_SIZE constant