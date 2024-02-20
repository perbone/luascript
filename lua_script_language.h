/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2024 Paulo Perbone
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

#include "lua_script.h"

#include "parser/parser.h"

#include "core/os/mutex.h"

#include <memory>

using ScriptTemplate = ScriptLanguage::ScriptTemplate;

class LuaScriptLanguage : public ScriptLanguage {
	static LuaScriptLanguage *singleton;

	friend class LuaScript;
	friend class LuaScriptInstance;
	friend class LuaScriptResourceFormatLoader;

public:
	LuaScriptLanguage();
	~LuaScriptLanguage();

	String get_name() const override;

	void init() override;
	String get_type() const override;
	String get_extension() const override;
	void finish() override;

	void get_reserved_words(List<String> *p_words) const override;
	bool is_control_flow_keyword(const String &p_string) const override;
	void get_comment_delimiters(List<String> *p_delimiters) const override;
	void get_doc_comment_delimiters(List<String> *p_delimiters) const override;
	void get_string_delimiters(List<String> *p_delimiters) const override;
	Ref<Script> make_template(const String &p_template, const String &p_class_name, const String &p_base_class_name) const override;
	Vector<ScriptTemplate> get_built_in_templates(const StringName &p_object) override;
	bool is_using_templates() override;
	bool validate(const String &p_script, const String &p_path = "", List<String> *r_functions = nullptr, List<ScriptError> *r_errors = nullptr, List<Warning> *r_warnings = nullptr, HashSet<int> *r_safe_lines = nullptr) const override;
	String validate_path(const String &p_path) const override;
	Script *create_script() const override;
	bool has_named_classes() const override;
	bool supports_builtin_mode() const override;
	bool can_inherit_from_file() const override;
	int find_function(const String &p_function, const String &p_code) const override;
	String make_function(const String &p_class, const String &p_name, const PackedStringArray &p_args) const override;
	Error open_in_external_editor(const Ref<Script> &p_script, int p_line, int p_col) override;
	bool overrides_external_editor() override;

	Error complete_code(const String &p_code, const String &p_path, Object *p_owner, List<CodeCompletionOption> *r_options, bool &r_force, String &r_call_hint) override;

#ifdef TOOLS_ENABLED
	Error lookup_code(const String &p_code, const String &p_symbol, const String &p_base_path, Object *p_owner, LookupResult &r_result) override;
#endif

	void auto_indent_code(String &p_code, int p_from_line, int p_to_line) const override;
	void add_global_constant(const StringName &p_variable, const Variant &p_value) override;
	void add_named_global_constant(const StringName &p_name, const Variant &p_value) override;
	void remove_named_global_constant(const StringName &p_name) override;

	void thread_enter() override;
	void thread_exit() override;

	String debug_get_error() const override;
	int debug_get_stack_level_count() const override;
	int debug_get_stack_level_line(int p_level) const override;
	String debug_get_stack_level_function(int p_level) const override;
	String debug_get_stack_level_source(int p_level) const override;
	void debug_get_stack_level_locals(int p_level, List<String> *p_locals, List<Variant> *p_values, int p_max_subitems = -1, int p_max_depth = -1) override;
	void debug_get_stack_level_members(int p_level, List<String> *p_members, List<Variant> *p_values, int p_max_subitems = -1, int p_max_depth = -1) override;
	ScriptInstance *debug_get_stack_level_instance(int p_level) override;
	void debug_get_globals(List<String> *p_globals, List<Variant> *p_values, int p_max_subitems = -1, int p_max_depth = -1) override;
	String debug_parse_stack_level_expression(int p_level, const String &p_expression, int p_max_subitems = -1, int p_max_depth = -1) override;

	Vector<StackInfo> debug_get_current_stack_info() override;

	void reload_all_scripts() override;
	void reload_scripts(const Array &p_scripts, bool p_soft_reload) override;
	void reload_tool_script(const Ref<Script> &p_script, bool p_soft_reload) override;

	void get_recognized_extensions(List<String> *p_extensions) const override;
	void get_public_functions(List<MethodInfo> *p_functions) const override;
	void get_public_constants(List<Pair<String, Variant>> *p_constants) const override;
	void get_public_annotations(List<MethodInfo> *p_annotations) const override;

	void profiling_start() override;
	void profiling_stop() override;
	void profiling_set_save_native_calls(bool p_enable) override;

	int profiling_get_accumulated_data(ProfilingInfo *p_info_arr, int p_info_max) override;
	int profiling_get_frame_data(ProfilingInfo *p_info_arr, int p_info_max) override;

	void frame() override;

	bool handles_global_class_type(const String &p_type) const override;
	String get_global_class_name(const String &p_path, String *r_base_type = nullptr, String *r_icon_path = nullptr) const override;

private:
	_FORCE_INLINE_ static LuaScriptLanguage *get_singleton() {
		print_debug("_LuaScriptLanguage::get_singleton");

		return singleton;
	}

	_FORCE_INLINE_ static std::unique_ptr<MutexLock<Mutex>> acquire() {
		print_debug("_LuaScriptLanguage::acquire");

		return std::make_unique<MutexLock<Mutex>>(singleton->mutex);
	}

	Mutex mutex{};
	SelfList<LuaScript>::List script_list{};
	parser::Parser parser{};

	String get_indentation() const;
};
