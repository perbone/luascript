/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2018 Paulo Perbone
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

const String METHOD_NAME_INIT = "_init";
const String METHOD_NAME_ENTER_TREE = "_enter_tree";
const String METHOD_NAME_EXIT_TREE = "_exit_tree";
const String METHOD_NAME_READY = "_ready";
const String METHOD_NAME_INPUT = "_input";
const String METHOD_NAME_UNHANDLED_INPUT = "_unhandled_input";
const String METHOD_NAME_UNHANDLED_KEY_INPUT = "_unhandled_key_input";
const String METHOD_NAME_PROCESS = "_process";
const String METHOD_NAME_PHYSICS_PROCESS = "_physics_process";
