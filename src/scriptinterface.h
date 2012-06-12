#ifndef _SCRIPTINTERFACE_H_
#define _SCRIPTINTERFACE_H_


extern "C"
{
   #include "lualib/src/lua.h"
   #include "lualib/src/lauxlib.h"
   #include "lualib/src/lualib.h"
}

class ScriptInterface
{

	ScriptInterface();
	~ScriptInterface();

	lua_State *LuaObj;


};

#endif