#include <stdio.h>
#include <lualib.h>
#include <lauxlib.h>
#include <lua.h>

int main(int argc, char *argv[]){
  const char *fn = "hello.lua";
  lua_State *lua = luaL_newstate();
  luaL_openlibs(lua);
  printf("%d\n", luaL_dofile(lua, fn));

  return 0;
}
