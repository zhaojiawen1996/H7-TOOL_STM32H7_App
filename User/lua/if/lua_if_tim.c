//��ģ�黹δʵ��

#include "lauxlib.h"
#include "lualib.h"
#include "time.h"
#include "lua_if.h"
#include "bsp.h"

static int lua_udp_print(lua_State* L);

void lua_tim_RegisterFun(void)
{
	//��ָ���ĺ���ע��ΪLua��ȫ�ֺ������������е�һ���ַ�������ΪLua����
    //�ڵ���C����ʱʹ�õ�ȫ�ֺ��������ڶ�������Ϊʵ��C������ָ�롣
    //lua_register(g_Lua, "udp_print", lua_udp_print);	
}




/***************************** ���������� www.armfly.com (END OF FILE) *********************************/