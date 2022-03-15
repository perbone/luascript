/*
 * This file is part of LuaScript
 * https://github.com/perbone/luascrip/
 *
 * Copyright 2017-2022 Paulo Perbone
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

class LuaScriptInstance : public ScriptInstance {
	friend class LuaScript;

public:
	~LuaScriptInstance();

	bool set(const StringName &p_name, const Variant &p_value) override;
	bool get(const StringName &p_name, Variant &r_ret) const override;
	void get_property_list(List<PropertyInfo> *p_properties) const override;
	Variant::Type get_property_type(const StringName &p_name, bool *r_is_valid = nullptr) const override;

	Object *get_owner() override;
	void get_property_state(List<Pair<StringName, Variant>> &state) override;

	void get_method_list(List<MethodInfo> *p_list) const override;
	bool has_method(const StringName &p_method) const override;

	Variant callp(const StringName &p_method, const Variant **p_args, int p_argcount, Callable::CallError &r_error) override;

	void notification(int p_notification) override;
	String to_string(bool *r_valid) override;

	void refcount_incremented() override;
	bool refcount_decremented() override;

	Ref<Script> get_script() const override;

	bool is_placeholder() const override;

	void property_set_fallback(const StringName &p_name, const Variant &p_value, bool *r_valid) override;
	Variant property_get_fallback(const StringName &p_name, bool *r_valid) override;

	const Vector<Multiplayer::RPCConfig> get_rpc_methods() const override;

	ScriptLanguage *get_language() override;

private:
	LuaScriptInstance(Object *p_owner, Ref<LuaScript> p_script);

	Object *owner;
	Ref<LuaScript> script;
};
