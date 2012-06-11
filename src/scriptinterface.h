#ifndef _SCRIPTINTERFACE_H_
#define _SCRIPTINTERFACE_H_

extern "C"
{
   #include "lualib/lua.h"
   #include "lualib/lauxlib.h"
   #include "lualib/lualib.h"
}
class ScriptInterface
{

	ScriptInterface();
	~ScriptInterface();

	lua_State *LuaObj;


};

#endif