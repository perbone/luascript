def is_enabled():
    # The module is disabled by default. Use module_luascript_enabled=yes to enable it.
    return False

def can_build(env, platform):
    return True

def configure(env):
    pass

def get_doc_classes():
	return ["LuaScript"]

def get_doc_path():
	return "doc_classes"
