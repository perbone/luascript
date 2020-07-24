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

#include "core/script_language.h"

#include "debug.h"

class LuaScript : public Script {
	GDCLASS(LuaScript, Script)

	friend class LuaScriptInstance;
	friend class LuaScriptLanguage;

private:
	bool tool;
	bool valid;

	SelfList<LuaScript> self;

	String source;

	Set<Object *> instances;

#ifdef TOOLS_ENABLED
	bool source_changed_cache;
	bool placeholder_fallback_enabled;
	Set<PlaceHolderScriptInstance *> placeholders;
#endif

public:
	LuaScript();
	virtual ~LuaScript();

	virtual bool can_instance() const;

	virtual Ref<Script> get_base_script() const;

	virtual StringName get_instance_base_type() const;
	virtual ScriptInstance *instance_create(Object *p_this);
	virtual PlaceHolderScriptInstance *placeholder_instance_create(Object *p_this);
	virtual bool instance_has(const Object *p_this) const;

	virtual bool has_source_code() const;
	virtual String get_source_code() const;
	virtual void set_source_code(const String &p_code);
	virtual Error reload(bool p_keep_state = false);

	virtual bool has_method(const StringName &p_method) const;
	virtual MethodInfo get_method_info(const StringName &p_method) const;

	virtual bool is_tool() const;
	virtual bool is_valid() const;

	virtual ScriptLanguage *get_language() const;

	virtual bool has_script_signal(const StringName &p_signal) const;
	virtual void get_script_signal_list(List<MethodInfo> *r_signals) const;

	virtual bool get_property_default_value(const StringName &p_property, Variant &r_value) const;

	virtual void update_exports();
	virtual void get_script_method_list(List<MethodInfo> *p_list) const;
	virtual void get_script_property_list(List<PropertyInfo> *p_list) const;

	virtual int get_member_line(const StringName &p_member) const;

	virtual void get_constants(Map<StringName, Variant> *p_constants);
	virtual void get_members(Set<StringName> *p_constants);

#ifdef TOOLS_ENABLED
	virtual bool is_placeholder_fallback_enabled() const;
#endif

public:
	Error load_source_code(const String &p_path);

	// Supports sorting based on inheritance; parent must came first // TODO
	bool operator()(const Ref<LuaScript> &a, const Ref<LuaScript> &b) const { return true; }

protected:
	static void _bind_methods();

	bool _set(const StringName &p_name, const Variant &p_property);
	bool _get(const StringName &p_name, Variant &r_property) const;
	void _get_property_list(List<PropertyInfo> *p_list) const;

private:
#ifdef TOOLS_ENABLED
	virtual void _placeholder_erased(PlaceHolderScriptInstance *p_placeholder);
#endif

	Variant _new(const Variant **p_args, int p_argcount, Variant::CallError &r_error);
};
