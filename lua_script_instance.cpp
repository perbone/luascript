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

#include "lua_script_instance.h"
#include "constants.h"
#include "debug.h"
#include "lua_script_language.h"

LuaScriptInstance::LuaScriptInstance(Object *p_owner, Ref<LuaScript> p_script) :
		owner(p_owner),
		script(p_script) {
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

	if (!script.is_valid()) {
		ERR_FAIL_V(Variant());
	}

	// FIXME call this|base::method

	r_error.error = Variant::CallError::CALL_ERROR_INVALID_METHOD;

	return Variant();
} // TODO

void LuaScriptInstance::call_multilevel(const StringName &p_method, const Variant **p_args, int p_argcount) {
	print_debug("LuaScriptInstance::call_multilevel( p_method = " + p_method + " )");

	Variant::CallError error;
	this->call(p_method, p_args, p_argcount, error);
	// FIXME call owner/base::call() after this::call()

} // TODO

void LuaScriptInstance::call_multilevel_reversed(const StringName &p_method, const Variant **p_args, int p_argcount) {
	print_debug("LuaScriptInstance::call_multilevel_reversed( p_method = " + p_method + " )");

	// FIXME call owner/base::call() before this::call()
	Variant::CallError error;
	this->call(p_method, p_args, p_argcount, error);

} // TODO

void LuaScriptInstance::notification(int p_notification) {
	print_debug("LuaScriptInstance::notification( p_notification = %d:%s )", p_notification, get_notification_name(p_notification).c_str());

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

MultiplayerAPI::RPCMode LuaScriptInstance::get_rpc_mode(const StringName &p_method) const { // TODO
	print_debug("LuaScriptInstance::get_rpc_mode( p_method = " + p_method + " )");

	return MultiplayerAPI::RPC_MODE_DISABLED;
}

MultiplayerAPI::RPCMode LuaScriptInstance::get_rset_mode(const StringName &p_variable) const { // TODO
	print_debug("LuaScriptInstance::get_rset_mode( p_variable = " + p_variable + " )");

	return MultiplayerAPI::RPC_MODE_DISABLED;
}

ScriptLanguage *LuaScriptInstance::get_language() {
	print_debug("LuaScriptInstance::get_language");

	return LuaScriptLanguage::get_singleton();
}
