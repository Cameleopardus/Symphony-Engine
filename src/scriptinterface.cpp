#include "scriptinterface.h"


ScriptInterface::ScriptInterface()
{
	Lua = luaL_newstate();
	luaL_openlibs(Lua);
    luaopen_table(Lua);
    luaopen_io(Lua);
    luaopen_string(Lua);
    luaopen_math(Lua);
}


ScriptInterface::~ScriptInterface()
{
	ScriptInterface::CloseLuaState(Lua);
}


void ScriptInterface::CloseLuaState(lua_State *LSTATE)
{
	lua_close(LSTATE);
}

void ScriptInterface::RegisterLuaFunction(lua_State *LSTATE, const char *NAME, lua_CFunction FUNC)
{
	lua_register(LSTATE,NAME,FUNC);
}
