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

#include "luascript.h"

const String LUA_EXTENSION = "lua";

LuaScript::LuaScript() {}

LuaScript::~LuaScript() {}

bool LuaScript::can_instance() const {
	return true;
}

// Returns the script directly inherited by this script.
Ref<Script> LuaScript::get_base_script() const {
	return Ref<Script>();
}

StringName LuaScript::get_instance_base_type() const {
	return StringName();
}

ScriptInstance *LuaScript::instance_create(Object *p_this) { // TODO
	return nullptr;
}

bool LuaScript::instance_has(const Object *p_this) const { // TODO
	return false;
}

bool LuaScript::has_source_code() const { // TODO
	return false;
}

String LuaScript::get_source_code() const { // TODO
	return String();
}

void LuaScript::set_source_code(const String &p_code) { // TODO

}

Error LuaScript::reload(bool p_keep_state) { // TODO
	return OK;
}

bool LuaScript::has_method(const StringName &p_method) const { // TODO
	return false;
}

MethodInfo LuaScript::get_method_info(const StringName &p_method) const { // TODO
	return MethodInfo();
}

bool LuaScript::is_tool() const { // TODO
	return false;
}

ScriptLanguage *LuaScript::get_language() const { // TODO
	return nullptr;
}

bool LuaScript::has_script_signal(const StringName &p_signal) const { // TODO
	return false;
}

void LuaScript::get_script_signal_list(List<MethodInfo> *r_signals) const {

}

bool LuaScript::get_property_default_value(const StringName &p_property, Variant &r_value) const { // TODO
	return false;
}

void LuaScript::update_exports() { // TODO

}

void LuaScript::get_script_method_list(List<MethodInfo> *p_list) const {}

void LuaScript::get_script_property_list(List<PropertyInfo> *p_list) const {}

int LuaScript::get_member_line(const StringName &p_member) const {
	return -1;
}

void LuaScript::get_constants(Map<StringName, Variant> *p_constants) {}

void LuaScript::get_members(Set<StringName> *p_constants) {}

void LuaScript::_bind_methods() {}

// LuaScriptInstance definitions

LuaScriptInstance::LuaScriptInstance() {}

LuaScriptInstance::~LuaScriptInstance() {}

bool LuaScriptInstance::LuaScriptInstance::set(const StringName &p_name, const Variant &p_value) {
	return false;
}

bool LuaScriptInstance::get(const StringName &p_name, Variant &r_ret) const {
	return false;
}

void LuaScriptInstance::get_property_list(List<PropertyInfo> *p_properties) const {}

Variant::Type LuaScriptInstance::get_property_type(const StringName &p_name, bool *r_is_valid) const {
	return Variant::Type();
}

Object *LuaScriptInstance::get_owner() {
	return nullptr;
}

void LuaScriptInstance::get_property_state(List<Pair<StringName, Variant> > &state) {}

void LuaScriptInstance::get_method_list(List<MethodInfo> *p_list) const {}

bool LuaScriptInstance::has_method(const StringName &p_method) const {
	return false;
}

Variant LuaScriptInstance::call(const StringName &p_method, VARIANT_ARG_DECLARE) {
	return Variant();
}

Variant LuaScriptInstance::call(const StringName &p_method, const Variant **p_args, int p_argcount, Variant::CallError &r_error) {
	return Variant();
}

void LuaScriptInstance::call_multilevel(const StringName &p_method, VARIANT_ARG_DECLARE) {}

void LuaScriptInstance::call_multilevel(const StringName &p_method, const Variant **p_args, int p_argcount) {}

void LuaScriptInstance::call_multilevel_reversed(const StringName &p_method, const Variant **p_args, int p_argcount) {}

void LuaScriptInstance::notification(int p_notification) {}

void LuaScriptInstance::refcount_incremented() {}

bool LuaScriptInstance::refcount_decremented() {}

Ref<Script> LuaScriptInstance::get_script() const {}

bool LuaScriptInstance::is_placeholder() {
	return false;
}

ScriptInstance::RPCMode LuaScriptInstance::get_rpc_mode(const StringName &p_method) const {
	return RPC_MODE_DISABLED;
}
ScriptInstance::RPCMode LuaScriptInstance::get_rset_mode(const StringName &p_variable) const {
	return RPC_MODE_DISABLED;
}

ScriptLanguage *LuaScriptInstance::get_language(){
	return nullptr;
}

void LuaScriptInstance::_bind_methods() {}

// LuaScriptLanguage definitions

LuaScriptLanguage::LuaScriptLanguage() {}
LuaScriptLanguage::~LuaScriptLanguage() {}

String LuaScriptLanguage::get_name() const {
	return "Lua";
}

void LuaScriptLanguage::init() {}

String LuaScriptLanguage::get_type() const {
	return "LuaScript";
}

String LuaScriptLanguage::get_extension() const {
	return "lua";
}

Error LuaScriptLanguage::execute_file(const String &p_path) {
	OK;
}

void LuaScriptLanguage::finish() {}

void LuaScriptLanguage::get_reserved_words(List<String> *p_words) const {}

void LuaScriptLanguage::get_comment_delimiters(List<String> *p_delimiters) const {}

void LuaScriptLanguage::get_string_delimiters(List<String> *p_delimiters) const {}

Ref<Script> LuaScriptLanguage::get_template(const String &p_class_name, const String &p_base_class_name) const {
	return Ref<Script>();
}

void LuaScriptLanguage::make_template(const String &p_class_name, const String &p_base_class_name, Ref<Script> &p_script) {}

bool LuaScriptLanguage::is_using_templates() {
	return false;
}

bool LuaScriptLanguage::validate(const String &p_script, int &r_line_error, int &r_col_error, String &r_test_error, const String &p_path, List<String> *r_functions) const {
	return false;
}

String LuaScriptLanguage::validate_path(const String &p_path) const {
	return String();
}

Script *LuaScriptLanguage::create_script() const {
	return nullptr;
}

bool LuaScriptLanguage::has_named_classes() const {
	return false;
}

bool LuaScriptLanguage::supports_builtin_mode() const {
	return false;
}

bool LuaScriptLanguage::can_inherit_from_file() {
	return true;
}

int LuaScriptLanguage::find_function(const String &p_function, const String &p_code) const {
	return -1;
}

String LuaScriptLanguage::make_function(const String &p_class, const String &p_name, const PoolStringArray &p_args) const {
	return String();
}

Error LuaScriptLanguage::open_in_external_editor(const Ref<Script> &p_script, int p_line, int p_col) {
	return ERR_UNAVAILABLE;
}

bool LuaScriptLanguage::overrides_external_editor() {
	return false;
}

Error LuaScriptLanguage::complete_code(const String &p_code, const String &p_base_path, Object *p_owner, List<String> *r_options, bool &r_force, String &r_call_hint) {
	return ERR_UNAVAILABLE;
}

Error LuaScriptLanguage::lookup_code(const String &p_code, const String &p_symbol, const String &p_base_path, Object *p_owner, LookupResult &r_result) {
	return ERR_UNAVAILABLE;
}

void LuaScriptLanguage::auto_indent_code(String &p_code, int p_from_line, int p_to_line) const {}

void LuaScriptLanguage::add_global_constant(const StringName &p_variable, const Variant &p_value) {}

void LuaScriptLanguage::thread_enter() {}

void LuaScriptLanguage::thread_exit() {}

String LuaScriptLanguage::debug_get_error() const {}

int LuaScriptLanguage::debug_get_stack_level_count() const {
	return -1;
}

int LuaScriptLanguage::debug_get_stack_level_line(int p_level) const {
	return -1;
}

String LuaScriptLanguage::debug_get_stack_level_function(int p_level) const {
	return String();
}

String LuaScriptLanguage::debug_get_stack_level_source(int p_level) const {
	return String();
}

void LuaScriptLanguage::debug_get_stack_level_locals(int p_level, List<String> *p_locals, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {}

void LuaScriptLanguage::debug_get_stack_level_members(int p_level, List<String> *p_members, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {}

ScriptInstance *LuaScriptLanguage::debug_get_stack_level_instance(int p_level) {
	return nullptr;
}

void LuaScriptLanguage::debug_get_globals(List<String> *p_globals, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {}

String LuaScriptLanguage::debug_parse_stack_level_expression(int p_level, const String &p_expression, int p_max_subitems, int p_max_depth) {
	return String();
}

Vector<ScriptLanguage::StackInfo> LuaScriptLanguage::debug_get_current_stack_info() {
	return Vector<StackInfo>();
}

void LuaScriptLanguage::reload_all_scripts() {}

void LuaScriptLanguage::reload_tool_script(const Ref<Script> &p_script, bool p_soft_reload) {}

void LuaScriptLanguage::get_recognized_extensions(List<String> *p_extensions) const {
	p_extensions->push_back(this->get_extension());
}

void LuaScriptLanguage::get_public_functions(List<MethodInfo> *p_functions) const {}

void LuaScriptLanguage::get_public_constants(List<Pair<String, Variant> > *p_constants) const {}

void LuaScriptLanguage::profiling_start() {}

void LuaScriptLanguage::profiling_stop() {}

int LuaScriptLanguage::profiling_get_accumulated_data(ProfilingInfo *p_info_arr, int p_info_max) {
	return -1;
}

int LuaScriptLanguage::profiling_get_frame_data(ProfilingInfo *p_info_arr, int p_info_max) {
	return -1;
}

void *LuaScriptLanguage::alloc_instance_binding_data(Object *p_object) {
	return nullptr;
}

void LuaScriptLanguage::free_instance_binding_data(void *p_data) {}

void LuaScriptLanguage::frame() {}

void LuaScriptLanguage::_bind_methods() {}
