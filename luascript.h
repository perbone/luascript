
#pragma once

#include "io/resource_loader.h"
#include "io/resource_saver.h"
#include "script_language.h"


class LuaScript : public Script {
	GDCLASS(LuaScript, Script)
	RES_BASE_EXTENSION("lua");
protected:

	static void _bind_methods();
};
