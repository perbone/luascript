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

#pragma once

#include "debug.h"

#include "core/object/script_language.h"

class LuaScript : public Script {
	GDCLASS(LuaScript, Script)

	friend class LuaScriptInstance;
	friend class LuaScriptLanguage;

public:
	LuaScript();
	~LuaScript();

	bool can_instantiate() const override;

	Ref<Script> get_base_script() const override;
	 StringName get_global_name() const override;

	bool inherits_script(const Ref<Script> &p_script) const override;

	StringName get_instance_base_type() const override;
	ScriptInstance *instance_create(Object *p_this) override;
#ifdef TOOLS_ENABLED
	PlaceHolderScriptInstance *placeholder_instance_create(Object *p_this) override;
#endif
	bool instance_has(const Object *p_this) const override;

	bool has_source_code() const override;
	String get_source_code() const override;
	void set_source_code(const String &p_code) override;
	Error reload(bool p_keep_state = false) override;

#ifdef TOOLS_ENABLED
	Vector<DocData::ClassDoc> get_documentation() const override;
	String get_class_icon_path() const override;
	PropertyInfo get_class_category() const override;
#endif

	bool has_method(const StringName &p_method) const override;
	MethodInfo get_method_info(const StringName &p_method) const override;

	bool is_tool() const override;
	bool is_valid() const override;
	bool is_abstract() const override;

	ScriptLanguage *get_language() const override;

	bool has_script_signal(const StringName &p_signal) const override;
	void get_script_signal_list(List<MethodInfo> *r_signals) const override;

	bool get_property_default_value(const StringName &p_property, Variant &r_value) const override;

	void update_exports() override;
	void get_script_method_list(List<MethodInfo> *p_list) const override;
	void get_script_property_list(List<PropertyInfo> *p_list) const override;

	int get_member_line(const StringName &p_member) const override;

	void get_constants(HashMap<StringName, Variant> *p_constants) override;
	void get_members(HashSet<StringName> *p_members) override;

#ifdef TOOLS_ENABLED
	bool is_placeholder_fallback_enabled() const override;
#endif

	const Variant get_rpc_config() const override;

public:
	Variant _new(const Variant **p_args, int p_argcount, Callable::CallError &r_error);

	Error load_source_code(const String &p_path);

	/**
	 * @brief Supports sorting based on inheritance; parent must came first // TODO
	 */
	bool operator()(const Ref<LuaScript> &a, const Ref<LuaScript> &b) const {
		return true;
	}

protected:
	static void _bind_methods();

#ifdef TOOLS_ENABLED
	void _placeholder_erased(PlaceHolderScriptInstance *p_placeholder) override;
#endif

private:
	bool tool{};
	bool valid{};

	SelfList<LuaScript> self;

	String source{};

	HashSet<Object *> instances{};

	Dictionary rpc_config;

#ifdef TOOLS_ENABLED
	bool source_changed_cache{};
	bool placeholder_fallback_enabled{};
	HashSet<PlaceHolderScriptInstance *> placeholders{};
	Vector<DocData::ClassDoc> docs{};
#endif
};
