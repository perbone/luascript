/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2019 Paulo Perbone
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

#include <cstdlib>

#include "debug.h"

#if defined(LUA_SCRIPT_DEBUG_ENABLED)

void print_debug(const String fmt, ...) {

	char* fmtbuf=new char[fmt.size()];
	char tmpbuf[256];
	char finalbuf[512];

	wcstombs(fmtbuf, fmt.c_str(), fmt.size());

	sprintf(tmpbuf, "%lu %2lu %2lu ",
			OS::get_singleton()->get_unix_time(),
			Thread::get_main_id(),
			Thread::get_caller_id());

	strcat(tmpbuf, fmtbuf);

	va_list ap;
	va_start(ap, fmt);

	vsprintf(finalbuf, tmpbuf, ap);

	va_end(ap);

	print_line(finalbuf);
}

#endif
