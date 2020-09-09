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

#include "core/os/mutex.h"

#include "lua_script.h"
#include "parser/parser.h"

class LuaScriptLanguage : public ScriptLanguage {
	static LuaScriptLanguage *singleton;

	friend class LuaScript;
	friend class LuaScriptInstance;

private:
	_FORCE_INLINE_ static LuaScriptLanguage *get_singleton() {
		print_debug("_LuaScriptLanguage::get_singleton");
		return singleton;
	}

	_FORCE_INLINE_ static MutexLock &acquire() {
		print_debug("_LuaScriptLanguage::acquire");
		return *(memnew(MutexLock(LuaScriptLanguage::singleton->mutex)));
	}

private:
	Mutex *mutex;
	SelfList<LuaScript>::List script_list;

public:
	LuaScriptLanguage();
	virtual ~LuaScriptLanguage();

	virtual String get_name() const;

	virtual void init();
	virtual String get_type() const;
	virtual String get_extension() const;
	virtual Error execute_file(const String &p_path);
	virtual void finish();

	virtual void get_reserved_words(List<String> *p_words) const;
	virtual void get_comment_delimiters(List<String> *p_delimiters) const;
	virtual void get_string_delimiters(List<String> *p_delimiters) const;
	virtual Ref<Script> get_template(const String &p_class_name, const String &p_base_class_name) const;
	virtual void make_template(const String &p_class_name, const String &p_base_class_name, Ref<Script> &p_script);
	virtual bool is_using_templates();
	virtual bool validate(const String &p_script, int &r_line_error, int &r_col_error, String &r_test_error, const String &p_path = "", List<String> *r_functions = nullptr, List<Warning> *r_warnings = nullptr, Set<int> *r_safe_lines = nullptr) const;
	virtual String validate_path(const String &p_path) const;
	virtual Script *create_script() const;
	virtual bool has_named_classes() const;
	virtual bool supports_builtin_mode() const;
	virtual bool can_inherit_from_file();
	virtual int find_function(const String &p_function, const String &p_code) const;
	virtual String make_function(const String &p_class, const String &p_name, const PoolStringArray &p_args) const;
	virtual Error open_in_external_editor(const Ref<Script> &p_script, int p_line, int p_col);
	virtual bool overrides_external_editor();

	virtual Error complete_code(const String &p_code, const String &p_path, Object *p_owner, List<ScriptCodeCompletionOption> *r_options, bool &r_force, String &r_call_hint);

	virtual Error lookup_code(const String &p_code, const String &p_symbol, const String &p_base_path, Object *p_owner, LookupResult &r_result);

	virtual void auto_indent_code(String &p_code, int p_from_line, int p_to_line) const;
	virtual void add_global_constant(const StringName &p_variable, const Variant &p_value);
	virtual void add_named_global_constant(const StringName &p_name, const Variant &p_value);
	virtual void remove_named_global_constant(const StringName &p_name);

	virtual void thread_enter();
	virtual void thread_exit();

	virtual String debug_get_error() const;
	virtual int debug_get_stack_level_count() const;
	virtual int debug_get_stack_level_line(int p_level) const;
	virtual String debug_get_stack_level_function(int p_level) const;
	virtual String debug_get_stack_level_source(int p_level) const;
	virtual void debug_get_stack_level_locals(int p_level, List<String> *p_locals, List<Variant> *p_values, int p_max_subitems = -1, int p_max_depth = -1);
	virtual void debug_get_stack_level_members(int p_level, List<String> *p_members, List<Variant> *p_values, int p_max_subitems = -1, int p_max_depth = -1);
	virtual ScriptInstance *debug_get_stack_level_instance(int p_level);
	virtual void debug_get_globals(List<String> *p_globals, List<Variant> *p_values, int p_max_subitems = -1, int p_max_depth = -1);
	virtual String debug_parse_stack_level_expression(int p_level, const String &p_expression, int p_max_subitems = -1, int p_max_depth = -1);

	virtual Vector<StackInfo> debug_get_current_stack_info();

	virtual void reload_all_scripts();
	virtual void reload_tool_script(const Ref<Script> &p_script, bool p_soft_reload);

	virtual void get_recognized_extensions(List<String> *p_extensions) const;
	virtual void get_public_functions(List<MethodInfo> *p_functions) const;
	virtual void get_public_constants(List<Pair<String, Variant> > *p_constants) const;

	virtual void profiling_start();
	virtual void profiling_stop();

	virtual int profiling_get_accumulated_data(ProfilingInfo *p_info_arr, int p_info_max);
	virtual int profiling_get_frame_data(ProfilingInfo *p_info_arr, int p_info_max);

	virtual void *alloc_instance_binding_data(Object *p_object);
	virtual void free_instance_binding_data(void *p_data);
	virtual void refcount_incremented_instance_binding(Object *p_object);
	virtual bool refcount_decremented_instance_binding(Object *p_object);

	virtual void frame();

	virtual bool handles_global_class_type(const String &p_type) const;
	virtual String get_global_class_name(const String &p_path, String *r_base_type = nullptr, String *r_icon_path = nullptr) const;

private:
	String get_indentation() const;
};
