#include <stdio.h>
#pragma comment(lib, "EHPacketLib")
#include "..\\EHPacketLib\\EHFun.h"
#include "..\\EHPacketLib\\EHPacket.h"
int main()
{
	int re = Add(3, 4);
	printf("result:%d\n", re);
	Packet* packet = new Packet(10);
	int msgid = packet->GetMsgID();
	printf("msgid:%d\n", msgid);
	delete packet;
	return 0;
}
