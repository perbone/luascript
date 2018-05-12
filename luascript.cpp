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
#include "debug.h"

#include "core/engine.h"
#include "editor/editor_settings.h"
#include "os/file_access.h"
#include "os/os.h"
#include "os/thread.h"

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

LuaScript::LuaScript() :
		tool(false),
		valid(false) {
	print_debug("LuaScript::constructor");
} // TODO

LuaScript::~LuaScript() {
	print_debug("LuaScript::destructor");
} // TODO

bool LuaScript::can_instance() const {
	print_debug("LuaScript::can_instance");

	return valid || (!tool && !ScriptServer::is_scripting_enabled());
}

// Returns the script directly inherited by this script.
Ref<Script> LuaScript::get_base_script() const { // TODO
	print_debug("LuaScript::get_base_script");

	return Ref<Script>();
}

StringName LuaScript::get_instance_base_type() const { // TODO
	print_debug("LuaScript::get_instance_base_type");

	return StringName();
}

ScriptInstance *LuaScript::instance_create(Object *p_this) { // TODO
	print_debug("LuaScript::instance_create( p_this = " + p_this->get_class_name() + " )");

	ERR_FAIL_COND_V(!this->valid, nullptr);

	if (!tool && !ScriptServer::is_scripting_enabled()) {
#ifdef TOOLS_ENABLED
		print_debug("LuaScript::instance_create( p_this = " + p_this->get_class_name() + " ) tools enabled...");
		PlaceHolderScriptInstance *placeHolder = memnew(PlaceHolderScriptInstance(LuaScriptLanguage::get_singleton(), Ref<Script>(this), p_this));
		placeholders.insert(placeHolder);

		return placeHolder;
#else
		return nullptr;
#endif
	}

	LuaScriptInstance *instance = memnew(LuaScriptInstance);
	instance->owner = p_this;
	instance->script = Ref<LuaScript>(this);

	auto guard = LuaScriptLanguage::acquire();
	this->instances.insert(p_this);

	return instance;
}

bool LuaScript::instance_has(const Object *p_this) const { // TODO
	print_debug("LuaScript::instance_has( p_this = " + p_this->get_class_name() + " )");

	auto guard = LuaScriptLanguage::acquire();
	bool found = this->instances.has((Object *)p_this);

	print_debug("LuaScript::instance_has( p_this = " + p_this->get_class_name() + ", found = " + (found ? "yes" : "no") + " )");

	return found;
}

bool LuaScript::has_source_code() const {
	print_debug("LuaScript::has_source_code");

	return !this->source.empty();
}

String LuaScript::get_source_code() const {
	print_debug("LuaScript::get_source_code");

	return this->source;
}

void LuaScript::set_source_code(const String &p_code) {
	print_debug("LuaScript::set_source_code");

	if (p_code != this->source) {
		this->source = p_code;
#ifdef TOOLS_ENABLED
		source_changed_cache = true;
#endif
	}
}

Error LuaScript::reload(bool p_keep_state) { // TODO
	print_debug("LuaScript::reload( p_keep_state = %d )", p_keep_state);

	{
		auto guard = LuaScriptLanguage::acquire();
		bool has_instances = instances.size();
		ERR_FAIL_COND_V(!p_keep_state && has_instances, ERR_ALREADY_IN_USE);
	}

	this->valid = false;

	// TODO reload
	//    this->tool =

	this->valid = true;

	return OK;
}

bool LuaScript::has_method(const StringName &p_method) const { // TODO
	print_debug("LuaScript::has_method( p_method = " + p_method + " )");

	return false;
}

MethodInfo LuaScript::get_method_info(const StringName &p_method) const { // TODO
	print_debug("LuaScript::get_method_info( p_method = " + p_method + " )");

	return MethodInfo();
}

bool LuaScript::is_tool() const { // TODO
	print_debug("LuaScript::is_tool");

	return this->tool;
}

ScriptLanguage *LuaScript::get_language() const { // TODO
	print_debug("LuaScript::get_language");

	return LuaScriptLanguage::get_singleton();
}

bool LuaScript::has_script_signal(const StringName &p_signal) const { // TODO
	print_debug("LuaScript::has_script_signal( p_signal = " + p_signal + " )");

	return false;
}

void LuaScript::get_script_signal_list(List<MethodInfo> *r_signals) const {
	print_debug("LuaScript::get_script_signal_list");

} // TODO

bool LuaScript::get_property_default_value(const StringName &p_property, Variant &r_value) const { // TODO
	print_debug("LuaScript::get_property_default_value( p_property = " + p_property + " )");

	return false;
}

void LuaScript::update_exports() {
	print_debug("LuaScript::update_exports");

} // TODO

void LuaScript::get_script_method_list(List<MethodInfo> *p_list) const {
	print_debug("LuaScript::get_script_method_list");

} // TODO

void LuaScript::get_script_property_list(List<PropertyInfo> *p_list) const {
	print_debug("LuaScript::get_script_property_list");

} // TODO

int LuaScript::get_member_line(const StringName &p_member) const {
	print_debug("LuaScript::get_member_line( p_member = " + p_member + " )");

	return -1;
}

void LuaScript::get_constants(Map<StringName, Variant> *p_constants) {
	print_debug("LuaScript::get_constants");

} // TODO

void LuaScript::get_members(Set<StringName> *p_constants) {
	print_debug("LuaScript::get_members");

} // TODO

void LuaScript::_bind_methods() {
	print_debug("LuaScript::_bind_methods");

	ClassDB::bind_vararg_method(METHOD_FLAGS_DEFAULT, "new", &LuaScript::_new, MethodInfo(Variant::OBJECT, "new"));

} // TODO
bool LuaScript::_set(const StringName &p_name, const Variant &p_property) { // TODO
	print_debug("LuaScript::_set( p_name = " + p_name + ", p_property = " + p_property + " )");
	return false;
}

bool LuaScript::_get(const StringName &p_name, Variant &r_property) const { // TODO
	print_debug("LuaScript::_get( p_name = " + p_name + ", r_property = " + r_property + " )");
	return false;
}

void LuaScript::_get_property_list(List<PropertyInfo> *p_list) const { // TODO
	print_debug("LuaScript::_get_property_list");
}

#ifdef TOOLS_ENABLED
void LuaScript::_placeholder_erased(PlaceHolderScriptInstance *p_placeholder) {
	print_debug("LuaScript::_placeholder_erased() tools enabled...");

	this->placeholders.erase(p_placeholder);
}
#endif

Variant LuaScript::_new(const Variant **p_args, int p_argcount, Variant::CallError &r_error) { // TODO
	print_debug("LuaScript::_new");

	return Variant();
}

LuaScriptInstance::LuaScriptInstance() {
	print_debug("LuaScriptInstance::constructor");

} // TODO

LuaScriptInstance::~LuaScriptInstance() {
	print_debug("LuaScriptInstance::destructor");

	if (script.is_valid() && owner) {

		auto guard = LuaScriptLanguage::acquire();
		script->instances.erase(owner);
	}
}

bool LuaScriptInstance::set(const StringName &p_name, const Variant &p_value) {
	print_debug("LuaScriptInstance::set( p_name = " + p_name + ", p_value = " + p_value + " )");

	return false;
}

bool LuaScriptInstance::get(const StringName &p_name, Variant &r_ret) const {
	print_debug("LuaScriptInstance::get( p_name = " + p_name + " )");

	return false;
}

void LuaScriptInstance::get_property_list(List<PropertyInfo> *p_properties) const {
	print_debug("LuaScriptInstance::get_property_list");

} // TODO

Variant::Type LuaScriptInstance::get_property_type(const StringName &p_name, bool *r_is_valid) const {
	print_debug("LuaScriptInstance::get_property_type( p_name = " + p_name + " )");

	return Variant::Type();
}

Object *LuaScriptInstance::get_owner() {
	print_debug("LuaScriptInstance::get_owner");

	return this->owner;
}

void LuaScriptInstance::get_method_list(List<MethodInfo> *p_list) const {
	print_debug("LuaScriptInstance::get_method_list");

} // TODO

bool LuaScriptInstance::has_method(const StringName &p_method) const {
	print_debug("LuaScriptInstance::has_method( p_method = " + p_method + " )");

	return false;
}

Variant LuaScriptInstance::call(const StringName &p_method, const Variant **p_args, int p_argcount, Variant::CallError &r_error) {
	print_debug("LuaScriptInstance::call( p_method = " + p_method + " )");

	return Variant();
}

void LuaScriptInstance::call_multilevel(const StringName &p_method, const Variant **p_args, int p_argcount) {
	print_debug("LuaScriptInstance::call_multilevel( p_method = " + p_method + " )");

} // TODO

void LuaScriptInstance::call_multilevel_reversed(const StringName &p_method, const Variant **p_args, int p_argcount) {
	print_debug("LuaScriptInstance::call_multilevel_reversed( p_method = " + p_method + " )");

} // TODO

void LuaScriptInstance::notification(int p_notification) {
	print_debug("LuaScriptInstance::notification( p_notification = %d )", p_notification);

} // TODO

void LuaScriptInstance::refcount_incremented() {
	print_debug("LuaScriptInstance::refcount_incremented");

} // TODO

bool LuaScriptInstance::refcount_decremented() {
	print_debug("LuaScriptInstance::refcount_decremented");

	return true;
} // TODO

Ref<Script> LuaScriptInstance::get_script() const {
	print_debug("LuaScriptInstance::get_script");

	return this->script;
}

ScriptInstance::RPCMode LuaScriptInstance::get_rpc_mode(const StringName &p_method) const { // TODO
	print_debug("LuaScriptInstance::get_rpc_mode( p_method = " + p_method + " )");

	return RPC_MODE_DISABLED;
}
ScriptInstance::RPCMode LuaScriptInstance::get_rset_mode(const StringName &p_variable) const { // TODO
	print_debug("LuaScriptInstance::get_rset_mode( p_variable = " + p_variable + " )");

	return RPC_MODE_DISABLED;
}

ScriptLanguage *LuaScriptInstance::get_language() {
	print_debug("LuaScriptInstance::get_language");

	return LuaScriptLanguage::get_singleton();
}

LuaScriptLanguage *LuaScriptLanguage::singleton = nullptr;

LuaScriptLanguage::LuaScriptLanguage() {
	print_debug("LuaScriptLanguage::constructor");

	ERR_FAIL_COND(singleton);
	singleton = this;
	mutex = Mutex::create();
}

LuaScriptLanguage::~LuaScriptLanguage() {
	print_debug("LuaScriptLanguage::destructor");
} // TODO

void LuaScriptLanguage::init() {
	print_debug("LuaScriptLanguage::init");
} // TODO

String LuaScriptLanguage::get_name() const {
	print_debug("LuaScriptLanguage::get_name");

	return LUA_NAME;
}

String LuaScriptLanguage::get_type() const {
	print_debug("LuaScriptLanguage::get_type");

	return LUA_TYPE;
}

String LuaScriptLanguage::get_extension() const {
	print_debug("LuaScriptLanguage::get_extension");

	return LUA_EXTENSION;
}

Error LuaScriptLanguage::execute_file(const String &p_path) { // TODO
	print_debug("LuaScriptLanguage::execute_file( p_path = " + p_path + " )");

	OK;
}

void LuaScriptLanguage::finish() {
	print_debug("LuaScriptLanguage::finish");
} // TODO

void LuaScriptLanguage::get_reserved_words(List<String> *p_words) const {
	print_debug("LuaScriptLanguage::get_reserved_words");

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
	print_debug("LuaScriptLanguage::get_comment_delimiters");

	p_delimiters->push_back("--"); // Single-line comment starts with a double hyphens
	p_delimiters->push_back("--[[ ]]"); // Block comment starts with double shovel and runs until double close box
}

void LuaScriptLanguage::get_string_delimiters(List<String> *p_delimiters) const {
	print_debug("LuaScriptLanguage::get_string_delimiters");

	p_delimiters->push_back("\" \"");
	p_delimiters->push_back("' '");
}

Ref<Script> LuaScriptLanguage::get_template(const String &p_class_name, const String &p_base_class_name) const {
	print_debug("LuaScriptLanguage::get_template( p_class_name = " + p_class_name + ", p_base_class_name = " + p_base_class_name + " )");

	String _template = String() +

					   "local class = require \"luascript.class\" -- Import the system class library\n" +
					   "local godot.%BASE% = require \"godot.%BASE%\" -- Make sure to import the base class\n" +
					   "\n" +
					   "\n" +
					   "local %CLASS% = class:extends(godot.%BASE%) -- Create the user subclass\n" +
					   "\n" +
					   "function %CLASS%:_ready()\n" +
					   "\n" +
					   "end\n" +
					   "\n" +
					   "function %CLASS%:_process(delta)\n" +
					   "\n" +
					   "end\n" +
					   "\n" +
					   "\n" +
					   "return %CLASS%\n";

	_template = _template.replace("%BASE%", p_base_class_name);
	_template = _template.replace("%CLASS%", p_class_name.capitalize().replace(" ", "").strip_edges());

	Ref<LuaScript> script;
	script.instance();
	script->set_source_code(_template);
	script->set_name(p_class_name);

	return script;
}

void LuaScriptLanguage::make_template(const String &p_class_name, const String &p_base_class_name, Ref<Script> &p_script) {
	print_debug("LuaScriptLanguage::make_template( p_class_name = " + p_class_name + ", p_base_class_name = " + p_base_class_name + " )");

	String src = p_script->get_source_code();
	src = src.replace("%BASE%", p_base_class_name)
				  .replace("%CLASS%", p_class_name)
				  .replace("%TS%", get_indentation());
	p_script->set_source_code(src);
}

bool LuaScriptLanguage::is_using_templates() {
	print_debug("LuaScriptLanguage::is_using_templates");

	return true;
}

bool LuaScriptLanguage::validate(const String &p_script, int &r_line_error, int &r_col_error, String &r_test_error,
		const String &p_path, List<String> *r_functions) const { // TODO
	print_debug("LuaScriptLanguage::validate");

	return true;
}

String LuaScriptLanguage::validate_path(const String &p_path) const { // TODO
	print_debug("LuaScriptLanguage::validate_path( p_path = " + p_path + " )");
	return EMPTY_STRING;
}

Script *LuaScriptLanguage::create_script() const {
	print_debug("LuaScriptLanguage::create_script");

	return memnew(LuaScript);
}

bool LuaScriptLanguage::has_named_classes() const { // TODO
	print_debug("LuaScriptLanguage::has_named_classes");
	return true;
}

bool LuaScriptLanguage::supports_builtin_mode() const {
	print_debug("LuaScriptLanguage::supports_builtin_mode");

	return true;
}

bool LuaScriptLanguage::can_inherit_from_file() { // TODO
	print_debug("LuaScriptLanguage::can_inherit_from_file");
	return true;
}

int LuaScriptLanguage::find_function(const String &p_function, const String &p_code) const { // TODO
	print_debug("LuaScriptLanguage::find_function( p_function = " + p_function + " )");

	return -1;
}

String LuaScriptLanguage::make_function(const String &p_class, const String &p_name, const PoolStringArray &p_args) const {
	print_debug("LuaScriptLanguage::make_function( p_class = " + p_class + ", p_name = " + p_name + " )");

	// FIXME! Godot does not pass p_class so the Lua class will be malformed.
	// Another problem is that Godot will append the function to the end of
	// the current file and this will broke the class as well.
	// At the moment this seems to be an API limitation and apparently
	// the C# backend devs have already acknowledged this issue
	// (seen by the comments on the source code).

	String funcDef = "function " + p_class + ":" + p_name + "(";
	for (int i = 0; i < p_args.size(); i++) {
		if (i > 0)
			funcDef += ", ";
		funcDef += p_args[i].get_slice(":", 0);
	}

	funcDef += ")\n\nend\n";

	return funcDef;
}

Error LuaScriptLanguage::open_in_external_editor(const Ref<Script> &p_script, int p_line, int p_col) { // TODO
	print_debug("LuaScriptLanguage::open_in_external_editor");
	return ERR_UNAVAILABLE;
}

bool LuaScriptLanguage::overrides_external_editor() { // TODO
	print_debug("LuaScriptLanguage::overrides_external_editor");
	return false;
}

Error LuaScriptLanguage::complete_code(const String &p_code, const String &p_base_path, Object *p_owner, List<String> *r_options,
		bool &r_force, String &r_call_hint) { // TODO
	print_debug("LuaScriptLanguage::complete_code");
	return ERR_UNAVAILABLE;
}

Error LuaScriptLanguage::lookup_code(const String &p_code, const String &p_symbol, const String &p_base_path, Object *p_owner,
		LookupResult &r_result) { // TODO
	print_debug("LuaScriptLanguage::lookup_code");
	return ERR_UNAVAILABLE;
}

void LuaScriptLanguage::auto_indent_code(String &p_code, int p_from_line, int p_to_line) const {
	print_debug("LuaScriptLanguage::auto_indent_code");
} // TODO

void LuaScriptLanguage::add_global_constant(const StringName &p_variable, const Variant &p_value) {
	print_debug("LuaScriptLanguage::add_global_constant( p_variable = " + p_variable + ", p_value = " + p_value + " )");
} // TODO

void LuaScriptLanguage::thread_enter() {
	print_debug("LuaScriptLanguage::thread_enter");
} // TODO

void LuaScriptLanguage::thread_exit() {
	print_debug("LuaScriptLanguage::thread_exit");
} // TODO

String LuaScriptLanguage::debug_get_error() const {
	print_debug("LuaScriptLanguage::debug_get_error");
} // TODO

int LuaScriptLanguage::debug_get_stack_level_count() const { // TODO
	print_debug("LuaScriptLanguage::debug_get_stack_level_count");
	return -1;
}

int LuaScriptLanguage::debug_get_stack_level_line(int p_level) const { // TODO
	print_debug("LuaScriptLanguage::debug_get_stack_level_line( p_level = %d )", p_level);
	return -1;
}

String LuaScriptLanguage::debug_get_stack_level_function(int p_level) const { // TODO
	print_debug("LuaScriptLanguage::debug_get_stack_level_function( p_level = %d )", p_level);
	return EMPTY_STRING;
}

String LuaScriptLanguage::debug_get_stack_level_source(int p_level) const { // TODO
	print_debug("LuaScriptLanguage::debug_get_stack_level_source( p_level = %d )", p_level);
	return EMPTY_STRING;
}

void LuaScriptLanguage::debug_get_stack_level_locals(int p_level, List<String> *p_locals, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {
	print_debug("LuaScriptLanguage::debug_get_stack_level_locals( p_level = %d, ... )", p_level);
} // TODO

void LuaScriptLanguage::debug_get_stack_level_members(int p_level, List<String> *p_members, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {
	print_debug("LuaScriptLanguage::debug_get_stack_level_members( p_level = %d, ... )", p_level);
} // TODO

ScriptInstance *LuaScriptLanguage::debug_get_stack_level_instance(int p_level) { // TODO
	print_debug("LuaScriptLanguage::debug_get_stack_level_instance( p_level = %d)", p_level);
	return nullptr;
}

void LuaScriptLanguage::debug_get_globals(List<String> *p_globals, List<Variant> *p_values, int p_max_subitems, int p_max_depth) {
	print_debug("LuaScriptLanguage::debug_get_globals");
} // TODO

String LuaScriptLanguage::debug_parse_stack_level_expression(int p_level, const String &p_expression, int p_max_subitems, int p_max_depth) { // TODO
	print_debug("LuaScriptLanguage::debug_parse_stack_level_expression( p_level = %d, ... )", p_level);
	return EMPTY_STRING;
}

Vector<ScriptLanguage::StackInfo> LuaScriptLanguage::debug_get_current_stack_info() { // TODO
	print_debug("LuaScriptLanguage::debug_get_current_stack_info");
	return Vector<StackInfo>();
}

void LuaScriptLanguage::reload_all_scripts() {
	print_debug("LuaScriptLanguage::reload_all_scripts");
} // TODO

void LuaScriptLanguage::reload_tool_script(const Ref<Script> &p_script, bool p_soft_reload) {
	print_debug("LuaScriptLanguage::reload_tool_script");
} // TODO

void LuaScriptLanguage::get_recognized_extensions(List<String> *p_extensions) const {
	print_debug("LuaScriptLanguage::get_recognized_extensions");

	p_extensions->push_back(LUA_EXTENSION);
}

void LuaScriptLanguage::get_public_functions(List<MethodInfo> *p_functions) const {
	print_debug("LuaScriptLanguage::get_public_functions");
} // TODO

void LuaScriptLanguage::get_public_constants(List<Pair<String, Variant> > *p_constants) const {
	print_debug("LuaScriptLanguage::get_public_constants");
} // TODO

void LuaScriptLanguage::profiling_start() {
	print_debug("LuaScriptLanguage::profiling_start");
} // TODO

void LuaScriptLanguage::profiling_stop() {
	print_debug("LuaScriptLanguage::profiling_stop");
} // TODO

int LuaScriptLanguage::profiling_get_accumulated_data(ProfilingInfo *p_info_arr, int p_info_max) { // TODO
	print_debug("LuaScriptLanguage::profiling_get_accumulated_data");
	return -1;
}

int LuaScriptLanguage::profiling_get_frame_data(ProfilingInfo *p_info_arr, int p_info_max) { // TODO
	print_debug("LuaScriptLanguage::profiling_get_frame_data");
	return -1;
}

void *LuaScriptLanguage::alloc_instance_binding_data(Object *p_object) { // TODO
	print_debug("LuaScriptLanguage::alloc_instance_binding_data( p_object = " + p_object->get_class_name() + " )");
	return nullptr;
}

void LuaScriptLanguage::free_instance_binding_data(void *p_data) {
	print_debug("LuaScriptLanguage::free_instance_binding_data");
} // TODO

void LuaScriptLanguage::frame() {
	//	print_debug("LuaScriptLanguage::frame");
} // TODO

String LuaScriptLanguage::get_indentation() const {
	print_debug("LuaScriptLanguage::get_indentation");

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

	return "  ";
}

LuaScriptResourceFormatLoader::LuaScriptResourceFormatLoader() {
	print_debug("LuaScriptResourceFormatLoader::constructor");
}

LuaScriptResourceFormatLoader::~LuaScriptResourceFormatLoader() {
	print_debug("LuaScriptResourceFormatLoader::destructor");
}

Ref<Resource> LuaScriptResourceFormatLoader::load(const String &p_path, const String &p_original_path, Error *r_error) {
	print_debug("LuaScriptResourceFormatLoader::load( p_path = " + p_path + ", p_original_path = " + p_original_path + " )");

	LuaScript *script = memnew(LuaScript);

	if (!script) {
		if (r_error) *r_error = ERR_OUT_OF_MEMORY;
		return nullptr;
	}

	script->set_path(p_original_path);

	Error error;
	error = this->load_source_code(script);
	if (error != OK) {
		if (r_error) *r_error = error;
		memdelete(script);
		return nullptr;
	}

	error = script->reload();
	if (error != OK) {
		if (r_error) *r_error = error;
		memdelete(script);
		return nullptr;
	}

	return Ref<LuaScript>(script);
}

void LuaScriptResourceFormatLoader::get_recognized_extensions(List<String> *p_extensions) const {
	print_debug("LuaScriptResourceFormatLoader::get_recognized_extensions");

	p_extensions->push_back(LUA_EXTENSION);
}

bool LuaScriptResourceFormatLoader::handles_type(const String &p_type) const {
	print_debug("LuaScriptResourceFormatLoader::handles_type( p_type = " + p_type + " )");

	return (p_type == SCRIPT_TYPE || p_type == LUA_TYPE);
}

String LuaScriptResourceFormatLoader::get_resource_type(const String &p_path) const {
	print_debug("LuaScriptResourceFormatLoader::get_resource_type( p_path = " + p_path + " )");

	return (p_path.get_extension().to_lower() == LUA_EXTENSION) ? LUA_TYPE : EMPTY_STRING;
}

Error LuaScriptResourceFormatLoader::load_source_code(LuaScript *script) {

	Error error;

	FileAccess *file = FileAccess::open(script->get_path(), FileAccess::READ, &error);
	if (error) {
		ERR_FAIL_COND_V(error, error);
	}

	PoolVector<uint8_t> buffer;

	int len = file->get_len();
	buffer.resize(len + 1);

	PoolVector<uint8_t>::Write w = buffer.write();

	int r = file->get_buffer(w.ptr(), len);

	file->close();
	memdelete(file);

	ERR_FAIL_COND_V(r != len, ERR_CANT_OPEN);

	w[len] = 0;

	String source;

	if (source.parse_utf8((const char *)w.ptr())) {
		ERR_EXPLAIN("Script '" + script->get_path() +
					"' contains invalid unicode (utf-8), so it was not loaded. Please ensure that scripts are saved in valid utf-8 unicode.");
		ERR_FAIL_V(ERR_INVALID_DATA);
	}

	script->set_source_code(source);

	return OK;
}

LuaScriptResourceFormatSaver::LuaScriptResourceFormatSaver() {
	print_debug("LuaScriptResourceFormatSaver::constructor");
}

LuaScriptResourceFormatSaver::~LuaScriptResourceFormatSaver() {
	print_debug("LuaScriptResourceFormatSaver::destructor");
}

Error LuaScriptResourceFormatSaver::save(const String &p_path, const Ref<Resource> &p_resource, uint32_t p_flags) {
	print_debug("LuaScriptResourceFormatSaver::save( p_path = " + p_path + " )");

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
	print_debug("LuaScriptResourceFormatSaver::get_recognized_extensions");

	if (Object::cast_to<LuaScript>(*p_resource)) {
		p_extensions->push_back(LUA_EXTENSION);
	}
}

bool LuaScriptResourceFormatSaver::recognize(const Ref<Resource> &p_resource) const {
	print_debug("LuaScriptResourceFormatSaver::recognize");

	return Object::cast_to<LuaScript>(*p_resource) != nullptr;
}
