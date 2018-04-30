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

#include "core/engine.h"
#include "editor/editor_settings.h"
#include "os/file_access.h"

const String EMPTY_STRING = "";
const String SCRIPT_TYPE = "Script";
const String LUA_NAME = "Lua";
const String LUA_TYPE = "LuaScript";
const String LUA_EXTENSION = "lua";

LuaScript::LuaScript() {} // TODO

LuaScript::~LuaScript() {} // TODO

bool LuaScript::can_instance() const {

	return true;
}

// Returns the script directly inherited by this script.
Ref<Script> LuaScript::get_base_script() const { // TODO
	return Ref<Script>();
}

StringName LuaScript::get_instance_base_type() const { // TODO
	return StringName();
}

ScriptInstance *LuaScript::instance_create(Object *p_this) { // TODO
	return nullptr;
}

bool LuaScript::instance_has(const Object *p_this) const { // TODO
	return false;
}

bool LuaScript::has_source_code() const {

	return !this->source.empty();
}

String LuaScript::get_source_code() const {

	return this->source;
}

void LuaScript::set_source_code(const String &p_code) {

	if (p_code != this->source) {
		this->source = p_code;
#ifdef TOOLS_ENABLED
		source_changed_cache = true;
#endif
	}
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

void LuaScript::get_script_method_list(List<MethodInfo> *p_list) const {} // TODO

void LuaScript::get_script_property_list(List<PropertyInfo> *p_list) const {} // TODO

int LuaScript::get_member_line(const StringName &p_member) const {
	return -1;
}

void LuaScript::get_constants(Map<StringName, Variant> *p_constants) {} // TODO

void LuaScript::get_members(Set<StringName> *p_constants) {} // TODO

void LuaScript::_bind_methods() {} // TODO

// LuaScriptInstance definitions

LuaScriptInstance::LuaScriptInstance() {} // TODO

LuaScriptInstance::~LuaScriptInstance() {} // TODO

bool LuaScriptInstance::LuaScriptInstance::set(const StringName &p_name, const Variant &p_value) {
	return false;
}

bool LuaScriptInstance::get(const StringName &p_name, Variant &r_ret) const {
	return false;
}

void LuaScriptInstance::get_property_list(List<PropertyInfo> *p_properties) const {} // TODO

Variant::Type LuaScriptInstance::get_property_type(const StringName &p_name, bool *r_is_valid) const {
	return Variant::Type();
}

Object *LuaScriptInstance::get_owner() {
	return nullptr;
}

void LuaScriptInstance::get_property_state(List<Pair<StringName, Variant> > &state) {} // TODO

void LuaScriptInstance::get_method_list(List<MethodInfo> *p_list) const {} // TODO

bool LuaScriptInstance::has_method(const StringName &p_method) const {
	return false;
}

Variant LuaScriptInstance::call(const StringName &p_method, VARIANT_ARG_DECLARE) {
	return Variant();
}

Variant LuaScriptInstance::call(const StringName &p_method, const Variant **p_args, int p_argcount, Variant::CallError &r_error) {
	return Variant();
}

void LuaScriptInstance::call_multilevel(const StringName &p_method, VARIANT_ARG_DECLARE) {} // TODO

void LuaScriptInstance::call_multilevel(const StringName &p_method, const Variant **p_args, int p_argcount) {} // TODO

void LuaScriptInstance::call_multilevel_reversed(const StringName &p_method, const Variant **p_args, int p_argcount) {} // TODO

void LuaScriptInstance::notification(int p_notification) {} // TODO

void LuaScriptInstance::refcount_incremented() {} // TODO

bool LuaScriptInstance::refcount_decremented() {} // TODO

Ref<Script> LuaScriptInstance::get_script() const {} // TODO

bool LuaScriptInstance::is_placeholder() {
	return false;
}

ScriptInstance::RPCMode LuaScriptInstance::get_rpc_mode(const StringName &p_method) const { // TODO
	return RPC_MODE_DISABLED;
}
ScriptInstance::RPCMode LuaScriptInstance::get_rset_mode(const StringName &p_variable) const { // TODO
	return RPC_MODE_DISABLED;
}

ScriptLanguage *LuaScriptInstance::get_language() { // TODO
	return nullptr;
}

void LuaScriptInstance::_bind_methods() {} // TODO

// LuaScriptLanguage definitions

LuaScriptLanguage::LuaScriptLanguage() {} // TODO

LuaScriptLanguage::~LuaScriptLanguage() {} // TODO

void LuaScriptLanguage::init() {} // TODO

String LuaScriptLanguage::get_name() const {

	return LUA_NAME;
}

String LuaScriptLanguage::get_type() const {

	return LUA_TYPE;
}

String LuaScriptLanguage::get_extension() const {

	return LUA_EXTENSION;
}

Error LuaScriptLanguage::execute_file(const String &p_path) { // TODO
	OK;
}

void LuaScriptLanguage::finish() {} // TODO

void LuaScriptLanguage::get_reserved_words(List<String> *p_words) const {

	static const char *_reserved_words[] = {

		"and",
		"break",
		"do",
		"else",
		"elseif",
		"end",
		"false",
		"for",
		"function",
		"goto",
		"if",
		"in",
		"local",
		"nil",
		"not",
		"or",
		"repeat",
		"return",
		"then",
		"true",
		"until",
		"while",

		nullptr
	};

	const char **w = _reserved_words;

	while (*w) {
		p_words->push_back(*w);
		w++;
	}
}

void LuaScriptLanguage::get_comment_delimiters(List<String> *p_delimiters) const {

	p_delimiters->push_back("--"); // Single-line comment starts with a double hyphens
	p_delimiters->push_back("--[[ ]]"); // Block comment starts with double shovel and runs until double close box
}

void LuaScriptLanguage::get_string_delimiters(List<String> *p_delimiters) const {

	p_delimiters->push_back("\" \"");
	p_delimiters->push_back("' '");
}

Ref<Script> LuaScriptLanguage::get_template(const String &p_class_name, const String &p_base_class_name) const {

	String _template = String() +

					   "-- Import the classes library\n" +
					   "local classes = require \"classes\"\n" +
					   "\n" +
					   "-- Make sure to import the base class\n" +
					   "local %BASE% = require \"%BASE%\"\n" +
					   "\n" +
					   "-- Create the subclass\n" +
					   "local %CLASS% = classes.class(%BASE%)\n" +
					   "\n" +
					   "function %CLASS%:_ready()\n" +
					   "\n" +
					   "end\n" +
					   "\n" +
					   "function %CLASS%:_process(delta)\n" +
					   "\n" +
					   "end\n" +
					   "\n" +
					   "-- Return the %CLASS% class\n" +
					   "return %CLASS%\n";

	_template = _template.replace("%BASE%", p_base_class_name);
	_template = _template.replace("%CLASS%", p_class_name);

	Ref<LuaScript> script;
	script.instance();
	script->set_source_code(_template);

	return script;
}

void LuaScriptLanguage::make_template(const String &p_class_name, const String &p_base_class_name, Ref<Script> &p_script) {} // TODO

bool LuaScriptLanguage::is_using_templates() {

	return true;
}

bool LuaScriptLanguage::validate(const String &p_script, int &r_line_error, int &r_col_error, String &r_test_error, const String &p_path, List<String> *r_functions) const { // TODO
	return false;
}

String LuaScriptLanguage::validate_path(const String &p_path) const { // TODO
	return EMPTY_STRING;
}

Script *LuaScriptLanguage::create_script() const { // TODO
	return nullptr;
}

bool LuaScriptLanguage::has_named_classes() const { // TODO
	return false;
}

bool LuaScriptLanguage::supports_builtin_mode() const { // TODO
	return false;
}

bool LuaScriptLanguage::can_inherit_from_file() { // TODO
	return true;
}

int LuaScriptLanguage::find_function(const String &p_function, const String &p_code) const { // TODO
	return -1;
}

String LuaScriptLanguage::make_function(const String &p_class, const String &p_name, const PoolStringArray &p_args) const { // TODO
	return EMPTY_STRING;
}

Error LuaScriptLanguage::open_in_external_editor(const Ref<Script> &p_script, int p_line, int p_col) { // TODO
	return ERR_UNAVAILABLE;
}

bool LuaScriptLanguage::overrides_external_editor() { // TODO
	return false;
}

Error LuaScriptLanguage::complete_code(const String &p_code, const String &p_base_path, Object *p_owner, List<String> *r_options, bool &r_force, String &r_call_hint) { // TODO
	return ERR_UNAVAILABLE;
}

Error LuaScriptLanguage::lookup_code(const String &p_code, const String &p_symbol, const String &p_base_path, Object *p_owner, LookupResult &r_result) { // TODO
	return ERR_UNAVAILABLE;
}

void LuaScriptLanguage::auto_indent_code(String &p_code, int p_from_line, int p_to_line) const {} // TODO

void LuaScriptLanguage::add_global_constant(const StringName &p_variable, const Variant &p_value) {} // TODO

void LuaScriptLanguage::thread_enter() {} // TODO

void LuaScriptLanguage::thread_exit() {} // TODO

String LuaScriptLanguage::debug_get_error() const {} // TODO

int LuaScriptLanguage::debug_get_stack_level_count() const { // TODO
	return -1;
}

int LuaScriptLanguage::debug_get_stack_level_line(int p_level) const { // TODO
	return -1;
}

String LuaScriptLanguage::debug_get_stack_level_function(int p_level) const { // TODO
	return EMPTY_STRING;
}

String LuaScriptLanguage::debug_get_stack_level_source(int p_level) const { // TODO
	return EMPTY_STRING;
}

void LuaScriptLanguage::debug_get_stack_level_locals(int p_level, List<String> *p_locals, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {} // TODO

void LuaScriptLanguage::debug_get_stack_level_members(int p_level, List<String> *p_members, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {} // TODO

ScriptInstance *LuaScriptLanguage::debug_get_stack_level_instance(int p_level) { // TODO
	return nullptr;
}

void LuaScriptLanguage::debug_get_globals(List<String> *p_globals, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {} // TODO

String LuaScriptLanguage::debug_parse_stack_level_expression(int p_level, const String &p_expression, int p_max_subitems, int p_max_depth) { // TODO
	return EMPTY_STRING;
}

Vector<ScriptLanguage::StackInfo> LuaScriptLanguage::debug_get_current_stack_info() { // TODO
	return Vector<StackInfo>();
}

void LuaScriptLanguage::reload_all_scripts() {} // TODO

void LuaScriptLanguage::reload_tool_script(const Ref<Script> &p_script, bool p_soft_reload) {} // TODO

void LuaScriptLanguage::get_recognized_extensions(List<String> *p_extensions) const {

	p_extensions->push_back(this->get_extension());
}

void LuaScriptLanguage::get_public_functions(List<MethodInfo> *p_functions) const {} // TODO

void LuaScriptLanguage::get_public_constants(List<Pair<String, Variant> > *p_constants) const {} // TODO

void LuaScriptLanguage::profiling_start() {} // TODO

void LuaScriptLanguage::profiling_stop() {} // TODO

int LuaScriptLanguage::profiling_get_accumulated_data(ProfilingInfo *p_info_arr, int p_info_max) { // TODO
	return -1;
}

int LuaScriptLanguage::profiling_get_frame_data(ProfilingInfo *p_info_arr, int p_info_max) { // TODO
	return -1;
}

void *LuaScriptLanguage::alloc_instance_binding_data(Object *p_object) { // TODO
	return nullptr;
}

void LuaScriptLanguage::free_instance_binding_data(void *p_data) {} // TODO

void LuaScriptLanguage::frame() {} // TODO

void LuaScriptLanguage::_bind_methods() {} // TODO

String LuaScriptLanguage::get_indentation() const {

#ifdef TOOLS_ENABLED
	if (Engine::get_singleton()->is_editor_hint()) {
		bool use_space_indentation = EDITOR_DEF("text_editor/indent/type", 0);

		if (use_space_indentation) {
			int indent_size = EDITOR_DEF("text_editor/indent/size", 2);

			String space_indent = "";
			for (int i = 0; i < indent_size; i++) {
				space_indent += " ";
			}
			return space_indent;
		}
	}
#endif

	return "\t";
}

// LuaScriptResourceFormatLoader

Ref<Resource> LuaScriptResourceFormatLoader::load(const String &p_path, const String &p_original_path, Error *r_error) {

	LuaScript *script = memnew(LuaScript);

	if (!script) {
		if (r_error) *r_error = ERR_OUT_OF_MEMORY;
		return nullptr;
	}

	script->set_path(p_original_path);

	auto error = script->reload();
	if (error != OK) {
		if (r_error) *r_error = error;
		memdelete(script);
		return nullptr;
	}

	return Ref<LuaScript>(script);
}

void LuaScriptResourceFormatLoader::get_recognized_extensions(List<String> *p_extensions) const {

	p_extensions->push_back(LUA_EXTENSION);
}

bool LuaScriptResourceFormatLoader::handles_type(const String &p_type) const {

	return (p_type == SCRIPT_TYPE || p_type == LUA_TYPE);
}

String LuaScriptResourceFormatLoader::get_resource_type(const String &p_path) const {

	return (p_path.get_extension().to_lower() == LUA_EXTENSION) ? LUA_TYPE : EMPTY_STRING;
}

// LuaScriptResourceFormatSaver

Error LuaScriptResourceFormatSaver::save(const String &p_path, const Ref<Resource> &p_resource, uint32_t p_flags) {

	Ref<LuaScript> script = p_resource;

	if (script.is_null()) return ERR_INVALID_PARAMETER;

	String source = script->get_source_code();

	Error error;
	FileAccess *file = FileAccess::open(p_path, FileAccess::WRITE, &error);

	if (error != OK) return error;

	file->store_string(source);
	if (file->get_error() != OK && file->get_error() != ERR_FILE_EOF) {
		memdelete(file);
		return ERR_CANT_CREATE;
	}
	file->close();
	memdelete(file);

	return OK;
}

void LuaScriptResourceFormatSaver::get_recognized_extensions(const Ref<Resource> &p_resource, List<String> *p_extensions) const {

	if (Object::cast_to<LuaScript>(*p_resource)) {
		p_extensions->push_back(LUA_EXTENSION);
	}
}

bool LuaScriptResourceFormatSaver::recognize(const Ref<Resource> &p_resource) const {

	return Object::cast_to<LuaScript>(*p_resource) != nullptr;
}
