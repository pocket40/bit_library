#pragma once
#include <stdlib.h>
#include <stdio.h>
#define MAX_BUF_SIZE    4096
#ifdef AIDFDJFHKJDFHJKSDFHDFHGJHDFGKJDFGK
#define MY_DLL __declspec(dllexport)
#else
#define MY_DLL __declspec(dllimport)
#endif
class MY_DLL Packet
{
    char base[MAX_BUF_SIZE];
    char* ptr;
    struct MsgHead
    {
        int msgid;
        int bdlen;
    };
public:
    Packet(FILE* fp);
    Packet(int msgid);
    virtual void Capsulate(void* src, size_t size);
    virtual int Write(FILE* fp);
    virtual int GetMsgID();
    virtual int UnCapsulate(void* target, size_t size);
};
extern "C" MY_DLL Packet * CreatePacket(int msgid);