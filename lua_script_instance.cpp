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

#include "lua_script_instance.h"

#include "constants.h"
#include "debug.h"
#include "lua_script_language.h"

LuaScriptInstance::LuaScriptInstance(Object *p_owner, Ref<LuaScript> p_script) :
		owner{ p_owner },
		script{ p_script } {
	print_debug("LuaScriptInstance::constructor( p_owner = %s )", String(p_owner->get_class_name()).ascii().get_data());
} // TODO

LuaScriptInstance::~LuaScriptInstance() {
	print_debug("LuaScriptInstance::destructor");

	if (script.is_valid() && owner) {
		auto guard = LuaScriptLanguage::acquire();
		script->instances.erase(owner);
	}
}

bool LuaScriptInstance::set(const StringName &p_name, const Variant &p_value) {
	print_debug("LuaScriptInstance::set( p_name = %s, p_value = %s )", String(p_name).ascii().get_data(), String(p_value).ascii().get_data());

	return false;
}

bool LuaScriptInstance::get(const StringName &p_name, Variant &r_ret) const {
	print_debug("LuaScriptInstance::get( p_name = %s )", String(p_name).ascii().get_data());

	return false;
}

void LuaScriptInstance::get_property_list(List<PropertyInfo> *p_properties) const {
	print_debug("LuaScriptInstance::get_property_list");

} // TODO

Variant::Type LuaScriptInstance::get_property_type(const StringName &p_name, bool *r_is_valid) const {
	print_debug("LuaScriptInstance::get_property_type( p_name = %s )", String(p_name).ascii().get_data());

	return Variant::Type();
}

void LuaScriptInstance::validate_property(PropertyInfo &p_property) const {
	print_debug("LuaScriptInstance::validate_property");
}

bool LuaScriptInstance::property_can_revert(const StringName &p_name) const {
	print_debug("LuaScriptInstance::property_can_revert( p_name = %s )", String(p_name).ascii().get_data());

	return false;
}
bool LuaScriptInstance::property_get_revert(const StringName &p_name, Variant &r_ret) const {
	print_debug("LuaScriptInstance::property_get_revert( p_name = %s )", String(p_name).ascii().get_data());

	return false;
}

Object *LuaScriptInstance::get_owner() {
	print_debug("LuaScriptInstance::get_owner");

	return this->owner;
}

void LuaScriptInstance::get_property_state(List<Pair<StringName, Variant>> &state) {
	print_debug("LuaScriptInstance::get_property_state");
}

void LuaScriptInstance::get_method_list(List<MethodInfo> *p_list) const {
	print_debug("LuaScriptInstance::get_method_list");

} // TODO

bool LuaScriptInstance::has_method(const StringName &p_method) const {
	print_debug("LuaScriptInstance::has_method( p_method = " + p_method + " )");

	return false;
}

Variant LuaScriptInstance::callp(const StringName &p_method, const Variant **p_args, int p_argcount, Callable::CallError &r_error) {
	print_debug("LuaScriptInstance::callp( p_method = " + p_method + " ) " + baseClassName);

	if (!script.is_valid()) {
		ERR_FAIL_V(Variant());
	}

	// FIXME call this|base::method

	r_error.error = Callable::CallError::CALL_ERROR_INVALID_METHOD;

	return Variant();
} // TODO

void LuaScriptInstance::notification(int p_notification, bool p_reversed) {
	print_debug("LuaScriptInstance::notification( p_notification = %d:%s ) %s",
			p_notification, get_notification_name(p_notification).c_str(), baseClassName.ascii().get_data());
} // TODO

String LuaScriptInstance::to_string(bool *r_valid) {
	if (r_valid)
		*r_valid = false;
	return String();
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

bool LuaScriptInstance::is_placeholder() const {
	print_debug("LuaScriptInstance::is_placeholder");

	return false;
}

void LuaScriptInstance::property_set_fallback(const StringName &p_name, const Variant &p_value, bool *r_valid) {
	print_debug("LuaScriptInstance::property_set_fallback( p_name = %s )", String(p_name).ascii().get_data());
}

Variant LuaScriptInstance::property_get_fallback(const StringName &p_name, bool *r_valid) {
	print_debug("LuaScriptInstance::property_get_fallback( p_name = %s )", String(p_name).ascii().get_data());

	return Variant{};
}

const Variant LuaScriptInstance::get_rpc_config() const {
	print_debug("LuaScriptInstance::get_rpc_config");

	return this->script->get_rpc_config();
}

ScriptLanguage *LuaScriptInstance::get_language() {
	print_debug("LuaScriptInstance::get_language");

	return LuaScriptLanguage::get_singleton();
}
