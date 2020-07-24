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

#include "core/os/os.h"

#include "constants.h"
#include "debug.h"
#include "lua_script.h"
#include "lua_script_instance.h"
#include "lua_script_language.h"

LuaScript::LuaScript() :
		tool(false),
		valid(false),
		self(this) {
	print_debug("LuaScript::constructor");

#ifdef TOOLS_ENABLED
	source_changed_cache = false;
	placeholder_fallback_enabled = false;
#endif

#ifdef DEBUG_ENABLED
	auto guard = LuaScriptLanguage::acquire();
	LuaScriptLanguage::get_singleton()->script_list.add(&this->self);
#endif
} // TODO

LuaScript::~LuaScript() {
	print_debug("LuaScript::destructor");

#ifdef DEBUG_ENABLED
	auto guard = LuaScriptLanguage::acquire();
	LuaScriptLanguage::get_singleton()->script_list.remove(&this->self);
#endif
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
		PlaceHolderScriptInstance *placeHolder = memnew(PlaceHolderScriptInstance(LuaScriptLanguage::get_singleton(), Ref<Script>(this), p_this));
		placeholders.insert(placeHolder);

		return placeHolder;
#else
		return nullptr;
#endif
	}

	LuaScriptInstance *instance = memnew(LuaScriptInstance(p_this, Ref<LuaScript>(this)));

	auto guard = LuaScriptLanguage::acquire();
	this->instances.insert(p_this);

	return instance;
}

PlaceHolderScriptInstance *LuaScript::placeholder_instance_create(Object *p_this) {
	print_debug("LuaScript::placeholder_instance_create( p_this = " + p_this->get_class_name() + " )");

#ifdef TOOLS_ENABLED
	PlaceHolderScriptInstance *instance = memnew(PlaceHolderScriptInstance(LuaScriptLanguage::get_singleton(), Ref<Script>(this), p_this));
	placeholders.insert(instance);
	update_exports();
	return instance;
#else
	return nullptr;
#endif
}

bool LuaScript::instance_has(const Object *p_this) const { // TODO
	print_debug("LuaScript::instance_has( p_this = " + p_this->get_class_name() + " )");

	auto guard = LuaScriptLanguage::acquire();
	bool found = this->instances.has((Object *)p_this);

	print_debug("LuaScript::instance_has( p_this = " + p_this->get_class_name() + " ) found = " + (found ? "yes" : "no") + " )");

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

bool LuaScript::is_valid() const { // TODO
	print_debug("LuaScript::is_valid");

	return this->valid;
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

#ifdef TOOLS_ENABLED

	return false;
#endif

	return false;
}

void LuaScript::update_exports() {
	print_debug("LuaScript::update_exports");

#ifdef TOOLS_ENABLED
	// TODO
#endif

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

#ifdef TOOLS_ENABLED
bool LuaScript::is_placeholder_fallback_enabled() const {
	print_debug("LuaScript::is_placeholder_fallback_enabled");

	return this->placeholder_fallback_enabled;
} // TODO
#endif

Error LuaScript::load_source_code(const String &p_path) {
	print_debug("LuaScript::load_source_code( p_path = " + p_path + " )");

	Error error;

	FileAccess *file = FileAccess::open(p_path, FileAccess::READ, &error);
	if (error) {
		ERR_FAIL_COND_V(error, error);
	}

	PoolVector<uint8_t> buffer;

	const int len = static_cast<const int>(file->get_len());
	buffer.resize(len + 1);

	PoolVector<uint8_t>::Write w = buffer.write();

	int r = file->get_buffer(w.ptr(), len);

	file->close();
	memdelete(file);

	ERR_FAIL_COND_V(r != len, ERR_CANT_OPEN);

	w[len] = 0;

	String source;

	if (source.parse_utf8((const char *)w.ptr())) {
		ERR_FAIL_V_MSG(ERR_INVALID_DATA, "Script '" + p_path + "' contains invalid unicode (utf-8), so it was not loaded. Please ensure that scripts are saved in valid utf-8 unicode.");
	}

	this->set_source_code(source);

	return OK;
}

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
	print_debug("LuaScript::_placeholder_erased");

	this->placeholders.erase(p_placeholder);
}
#endif

Variant LuaScript::_new(const Variant **p_args, int p_argcount, Variant::CallError &r_error) { // TODO
	print_debug("LuaScript::_new");

	return Variant();
}
