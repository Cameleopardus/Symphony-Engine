#include "scriptinterface.h"


ScriptInterface::ScriptInterface()
{
	LuaObj = lua_open();
}


ScriptInterface::~ScriptInterface()
{
}

