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

#include "lua_script_language.h"

#include "constants.h"
#include "debug.h"

#include "core/config/engine.h"
#include "core/config/project_settings.h"

#ifdef TOOLS_ENABLED
//#include "core/config/project_settings.h"
//#include "editor/editor_file_system.h"
#include "editor/editor_settings.h"
#endif

LuaScriptLanguage *LuaScriptLanguage::singleton = nullptr;

LuaScriptLanguage::LuaScriptLanguage() {
	print_debug("LuaScriptLanguage::constructor");

	ERR_FAIL_COND(singleton);
	this->singleton = this;
}

LuaScriptLanguage::~LuaScriptLanguage() {
	print_debug("LuaScriptLanguage::destructor");

	if (this->singleton == this) {
		this->singleton = nullptr;
	}

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

	return LUA_SCRIPT_TYPE;
}

String LuaScriptLanguage::get_extension() const {
	print_debug("LuaScriptLanguage::get_extension");

	return LUA_EXTENSION;
}

void LuaScriptLanguage::finish() {
	print_debug("LuaScriptLanguage::finish");

} // TODO

void LuaScriptLanguage::get_reserved_words(List<String> *p_words) const {
	print_debug("LuaScriptLanguage::get_reserved_words");

	static const char *keywords[] = {

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

	const char **w = keywords;

	while (*w) {
		p_words->push_back(*w);
		w++;
	}
}

bool LuaScriptLanguage::is_control_flow_keyword(String p_keyword) const {
	return p_keyword == "break" ||
			p_keyword == "else" ||
			p_keyword == "elseif" ||
			p_keyword == "do" ||
			p_keyword == "for" ||
			p_keyword == "goto" ||
			p_keyword == "if" ||
			p_keyword == "repeat" ||
			p_keyword == "return" ||
			p_keyword == "then" ||
			p_keyword == "until" ||
			p_keyword == "while";
}

void LuaScriptLanguage::get_comment_delimiters(List<String> *p_delimiters) const {
	print_debug("LuaScriptLanguage::get_comment_delimiters");

	p_delimiters->push_back("--[[ ]]"); // Block comment starts with double shovel and runs until double close box
	p_delimiters->push_back("--"); // Single-line comment starts with a double hyphens
}

void LuaScriptLanguage::get_doc_comment_delimiters(List<String> *p_delimiters) const {
	print_debug("LuaScriptLanguage::get_doc_comment_delimiters");
}

void LuaScriptLanguage::get_string_delimiters(List<String> *p_delimiters) const {
	print_debug("LuaScriptLanguage::get_string_delimiters");

	p_delimiters->push_back("\" \"");
	p_delimiters->push_back("' '");
	p_delimiters->push_back("[[ ]]"); // Mult-line strings
}

Ref<Script> LuaScriptLanguage::make_template(
		const String &p_template,
		const String &p_class_name,
		const String &p_base_class_name) const {
	print_debug("LuaScriptLanguage::make_template( p_template = " + p_template + ", p_class_name = " + p_class_name + ", p_base_class_name = " + p_base_class_name + " )");

	String _template = String() +

			"\n" +
			"local class = require 'lua.class'       -- Import the system class library\n" +
			"local %BASE% = require 'godot.%BASE%' 	-- Make sure to import the base class\n" +
			"\n" +
			"\n" +
			"local %CLASS% = class.extends(%BASE%) 	-- Create the user subclass\n" +
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
	script.instantiate();
	script->set_source_code(_template);
	script->set_name(p_class_name);
	script->valid = true;

	return script;
}

Vector<ScriptTemplate> LuaScriptLanguage::get_built_in_templates(StringName p_object) {
	print_debug("LuaScriptLanguage::get_built_in_templates");

	return Vector<ScriptTemplate>();
} // TODO

bool LuaScriptLanguage::is_using_templates() {
	print_debug("LuaScriptLanguage::is_using_templates");

	return true;
}

bool LuaScriptLanguage::validate(
		const String &p_script,
		const String &p_path,
		List<String> *r_functions,
		List<ScriptError> *r_errors,
		List<Warning> *r_warnings,
		HashSet<int> *r_safe_lines) const {
	print_debug("LuaScriptLanguage::validate( p_path = %s )", p_path.ascii().get_data());

	parser::ast::AST ast = parser.parse(p_script.ascii().get_data());

	if (ast->is_valid()) {
		r_functions->clear();
		for (auto method : ast->get_methods()) {
			r_functions->push_back(String{ (method.name + ":" + std::to_string(method.line)).c_str() });
		}
	} else {
		// TODO handle parsing error
	}

	return ast->is_valid();
} // TODO

String LuaScriptLanguage::validate_path(const String &p_path) const { // TODO
	print_debug("LuaScriptLanguage::validate_path( p_path = " + p_path + " )");

	return EMPTY_STRING;
}

Script *LuaScriptLanguage::create_script() const {
	print_debug("LuaScriptLanguage::create_script");

	return memnew(LuaScript);
}

bool LuaScriptLanguage::has_named_classes() const {
	print_debug("LuaScriptLanguage::has_named_classes");

	return true; // FIXME: should it be false like GDScript and CSharp?
}

bool LuaScriptLanguage::supports_builtin_mode() const {
	print_debug("LuaScriptLanguage::supports_builtin_mode");

	return false;
}

bool LuaScriptLanguage::can_inherit_from_file() const { // TODO
	print_debug("LuaScriptLanguage::can_inherit_from_file");

	return true;
}

int LuaScriptLanguage::find_function(const String &p_function, const String &p_code) const { // TODO
	print_debug("LuaScriptLanguage::find_function( p_function = " + p_function + " )");

	return -1;
}

String LuaScriptLanguage::make_function(const String &p_class, const String &p_name, const PackedStringArray &p_args) const {
	print_debug("LuaScriptLanguage::make_function( p_class = " + p_class + ", p_name = " + p_name + " )");

	// FIXME! Godot does not pass p_class so the Lua class will be malformed.
	// Another problem is that Godot will append the function to the end of
	// the current file and this will broke the class as well.
	// At the moment this seems to be an API limitation and apparently
	// the C# backend devs have already acknowledged this issue
	// (seen by their comments in the c# backend source code).

	String funcDef = "function " + p_class + ":" + p_name + "(";
	for (int i = 0; i < p_args.size(); i++) {
		if (i > 0) {
			funcDef += ", ";
		}
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

Error LuaScriptLanguage::complete_code(const String &p_code, const String &p_path, Object *p_owner,
		List<CodeCompletionOption> *r_options, bool &r_force, String &r_call_hint) { // TODO
	print_debug("LuaScriptLanguage::complete_code");

	return ERR_UNAVAILABLE;
}

#ifdef TOOLS_ENABLED
Error LuaScriptLanguage::lookup_code(const String &p_code, const String &p_symbol, const String &p_base_path, Object *p_owner, LookupResult &r_result) { // TODO
	print_debug("LuaScriptLanguage::lookup_code");

	return ERR_UNAVAILABLE;
}
#endif

void LuaScriptLanguage::auto_indent_code(String &p_code, int p_from_line, int p_to_line) const {
	print_debug("LuaScriptLanguage::auto_indent_code");
} // TODO

void LuaScriptLanguage::add_global_constant(const StringName &p_variable, const Variant &p_value) {
	print_debug("LuaScriptLanguage::add_global_constant( p_variable = %s, p_value = %s )", String(p_variable).ascii().get_data(), String(p_value).ascii().get_data());
} // TODO

void LuaScriptLanguage::add_named_global_constant(const StringName &p_name, const Variant &p_value) {
	print_debug("LuaScriptLanguage::add_named_global_constant( p_name = %s, p_value = %s )", String(p_name).ascii().get_data(), String(p_value).ascii().get_data());

} // TODO

void LuaScriptLanguage::remove_named_global_constant(const StringName &p_name) {
	print_debug("LuaScriptLanguage::remove_named_global_constant( p_name = %s )", String(p_name).ascii().get_data());

} // TODO

void LuaScriptLanguage::thread_enter() {
	print_debug("LuaScriptLanguage::thread_enter");
} // TODO

void LuaScriptLanguage::thread_exit() {
	print_debug("LuaScriptLanguage::thread_exit");
} // TODO

String LuaScriptLanguage::debug_get_error() const {
	print_debug("LuaScriptLanguage::debug_get_error");

	return EMPTY_STRING;
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

#ifdef DEBUG_ENABLED
	List<Ref<LuaScript>> scripts;

	{
		auto guard = LuaScriptLanguage::acquire();

		SelfList<LuaScript> *elem = script_list.first();
		while (elem) {
			if (elem->self()->get_path().is_resource_file()) {
				scripts.push_back(Ref<LuaScript>(elem->self()));
			}
			elem = elem->next();
		}
	}

	scripts.sort(); // update in inheritance dependency order, parent must be reload first

	for (Ref<LuaScript> &script : scripts) {
		script->load_source_code(script->get_path());
		script->reload(true);
	}
#endif
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

void LuaScriptLanguage::get_public_constants(List<Pair<String, Variant>> *p_constants) const {
	print_debug("LuaScriptLanguage::get_public_constants");
} // TODO

void LuaScriptLanguage::get_public_annotations(List<MethodInfo> *p_annotations) const {
	print_debug("LuaScriptLanguage::get_public_annotations");
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

void LuaScriptLanguage::frame() {
	//	print_debug("LuaScriptLanguage::frame");
} // TODO

bool LuaScriptLanguage::handles_global_class_type(const String &p_type) const {
	print_debug("LuaScriptLanguage::handles_global_class_type( p_type = " + p_type + " )");

	return p_type == LUA_SCRIPT_TYPE;
}

String LuaScriptLanguage::get_global_class_name(const String &p_path, String *r_base_type, String *r_icon_path) const {
	print_debug("LuaScriptLanguage::get_global_class_name( p_path = " + p_path + " )");

	return String();
} // TODO

String LuaScriptLanguage::get_indentation() const {
	print_debug("LuaScriptLanguage::get_indentation");

#ifdef TOOLS_ENABLED
	if (Engine::get_singleton()->is_editor_hint()) {
		bool use_space_indentation = EDITOR_DEF("text_editor/behavior/indent/type", true);

		if (use_space_indentation) {
			int indent_size = EDITOR_DEF("text_editor/behavior/indent/size", LUA_PIL_IDENTATION_SIZE);

			String space_indent = EMPTY_STRING;
			for (int i = 0; i < indent_size; i++) {
				space_indent += " ";
			}
			return space_indent;
		}
	}
#endif

	return LUA_PIL_IDENTATION;
}
