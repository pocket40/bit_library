#include <Windows.h>
#include <stdio.h>
//#pragma comment(lib,"EHPacketLib")
#include "..\\EHPacketLib\\EHFun.h"
#include "..\\EHPacketLib\\\EHPacket.h"
typedef int (*FunAdd)(int, int);
typedef Packet* (*MyFun)(int msgid);
typedef int (*Fun)();
int main()
{
    WCHAR dir[256];
    GetCurrentDirectory(256, dir);
    wprintf(dir);
    HINSTANCE hLib = LoadLibrary(TEXT("EHPacketLib.dll"));
    if (hLib == 0)
    {
        printf("dll 파일이 없어 Dragon~\n");
        return 0;
    }

    //int re = Add(3, 4);
    FunAdd fun = (FunAdd)GetProcAddress(hLib, "Add");
    int re = fun(3, 4);
    printf("result:%d\n", re);
    MyFun mf = (MyFun)GetProcAddress(hLib, "CreatePacket");
    Packet* packet = mf(10);
    int msgid = packet->GetMsgID();
    printf("msgid:%d\n", msgid);
    delete packet;
    //system("pause");
    FreeLibrary(hLib);
    return 0;
}