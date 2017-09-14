
#pragma once

#include "script_language.h"


class LuaScript : public Script {
	GDCLASS(LuaScript, Script)

protected:

	static void _bind_methods();
};
