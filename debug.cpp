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

#ifdef DEBUG_ENABLED

#include "debug.h"

#include <atomic>
#include <cstdlib>
#include <cstring>
#include <map>
#include <mutex>
#include <string>
#include <vector>

#include "core/os/os.h"
#include "core/os/thread.h"

std::map<int, std::string>
		notifications{
			{ 0, "NOTIFICATION_POSTINITIALIZE" },
			{ 1, "NOTIFICATION_PREDELETE" },
			{ 10, "NOTIFICATION_ENTER_TREE" },
			{ 11, "NOTIFICATION_EXIT_TREE" },
			{ 12, "NOTIFICATION_MOVED_IN_PARENT" },
			{ 13, "NOTIFICATION_READY" },
			{ 14, "NOTIFICATION_PAUSED" },
			{ 15, "NOTIFICATION_UNPAUSED" },
			{ 16, "NOTIFICATION_PHYSICS_PROCESS" },
			{ 17, "NOTIFICATION_PROCESS" },
			{ 18, "NOTIFICATION_PARENTED" },
			{ 19, "NOTIFICATION_UNPARENTED" },
			{ 20, "NOTIFICATION_INSTANCED" },
			{ 21, "NOTIFICATION_DRAG_BEGIN" },
			{ 22, "NOTIFICATION_DRAG_END" },
			{ 23, "NOTIFICATION_PATH_CHANGED" },
			{ 25, "NOTIFICATION_INTERNAL_PROCESS" },
			{ 26, "NOTIFICATION_INTERNAL_PHYSICS_PROCESS" },
			{ 27, "NOTIFICATION_POST_ENTER_TREE" },
			{ 28, "NOTIFICATION_DISABLED" },
			{ 29, "NOTIFICATION_ENABLED" },
			{ 30, "NOTIFICATION_DRAW" },
			{ 31, "NOTIFICATION_VISIBILITY_CHANGED" },
			{ 32, "NOTIFICATION_ENTER_CANVAS" },
			{ 33, "NOTIFICATION_EXIT_CANVAS" },
			{ 40, "NOTIFICATION_RESIZED" },
			{ 41, "NOTIFICATION_MOUSE_ENTER" },
			{ 42, "NOTIFICATION_MOUSE_EXIT" },
			{ 43, "NOTIFICATION_FOCUS_ENTER" },
			{ 44, "NOTIFICATION_FOCUS_EXIT" },
			{ 45, "NOTIFICATION_THEME_CHANGED" },
			{ 46, "NOTIFICATION_MODAL_CLOSE" },
			{ 47, "NOTIFICATION_SCROLL_BEGIN" },
			{ 48, "NOTIFICATION_SCROLL_END" },
			{ 49, "NOTIFICATION_LAYOUT_DIRECTION_CHANGED" },
			{ 50, "NOTIFICATION_PRE_SORT_CHILDREN" },
			{ 51, "NOTIFICATION_SORT_CHILDREN" },
			{ 80, "NOTIFICATION_POST_POPUP" },
			{ 81, "NOTIFICATION_POPUP_HIDE" },
			{ 1002, "NOTIFICATION_WM_MOUSE_ENTER" },
			{ 1003, "NOTIFICATION_WM_MOUSE_EXIT" },
			{ 1004, "NOTIFICATION_WM_WINDOW_FOCUS_IN" },
			{ 1005, "NOTIFICATION_WM_WINDOW_FOCUS_OUT" },
			{ 1006, "NOTIFICATION_WM_CLOSE_REQUEST" },
			{ 1007, "NOTIFICATION_WM_GO_BACK_REQUEST" },
			{ 1008, "NOTIFICATION_WM_SIZE_CHANGED" },
			{ 2000, "NOTIFICATION_TRANSFORM_CHANGED" },
			{ 2010, "NOTIFICATION_TRANSLATION_CHANGED" },
			{ 2011, "NOTIFICATION_WM_ABOUT" },
			{ 2012, "NOTIFICATION_CRASH" },
			{ 2013, "NOTIFICATION_OS_IME_UPDATE" },
			{ 2014, "NOTIFICATION_APPLICATION_RESUMED" },
			{ 2015, "NOTIFICATION_APPLICATION_PAUSED" },
			{ 2016, "NOTIFICATION_APPLICATION_FOCUS_IN" },
			{ 2017, "NOTIFICATION_APPLICATION_FOCUS_OUT" },
			{ 2009, "NOTIFICATION_OS_MEMORY_WARNING" },
			{ 2018, "NOTIFICATION_TEXT_SERVER_CHANGED" },
			{ 9001, "NOTIFICATION_EDITOR_PRE_SAVE" },
			{ 9002, "NOTIFICATION_EDITOR_POST_SAVE" },
			{ 10000, "NOTIFICATION_EDITOR_SETTINGS_CHANGED" }
		};

std::string get_notification_name(const int constant_value) {
	if (notifications.find(constant_value) != notifications.end())
		return notifications[constant_value];
	else
		return "Unknown notification value [" + std::to_string(constant_value) + "]";
}

std::mutex tidMutex{};
long currTid{ 0l };
std::map<Thread::ID, long> tids{};

long normalize_thread_id(const Thread::ID tid) {
	const std::lock_guard<std::mutex> guard{ tidMutex };
	return tids.find(tid) == tids.end() ? tids[tid] = currTid++ : tids[tid];
}

std::string cur_timestamp() {
	using namespace std::chrono;
	auto timepoint = system_clock::now();
	auto coarse = system_clock::to_time_t(timepoint);
	auto fine = time_point_cast<std::chrono::milliseconds>(timepoint);

	char buffer[sizeof "9999-12-31 23:59:59.999"];
	std::snprintf(buffer + std::strftime(buffer, sizeof buffer - 3, "%F %T.", std::localtime(&coarse)),
			4, "%03llu", static_cast<long long>(fine.time_since_epoch().count() % 1000));

	return buffer;
}

void print_debug(const String fmt, ...) {
	char tmpbuf[256], finalbuf[512];
	std::vector<char> fmtbuffer(fmt.size());
	char *fmtbuf = fmtbuffer.data();

	wcstombs(fmtbuf, (const wchar_t *)fmt.ptr(), fmt.size());

	sprintf(tmpbuf, "%6d %s %ld %2ld ",
			OS::get_singleton()->get_process_id(),
			cur_timestamp().c_str(),
			normalize_thread_id(Thread::get_main_id()),
			normalize_thread_id(Thread::get_caller_id()));

	strcat(tmpbuf, fmtbuf);

	va_list ap;
	va_start(ap, fmt);

	vsprintf(finalbuf, tmpbuf, ap);

	va_end(ap);

	printf("%s\n", finalbuf);
}

#endif
