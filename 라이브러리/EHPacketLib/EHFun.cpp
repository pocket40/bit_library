#include <stdio.h>
#define AIDFDJFHKJDFHJKSDFHDFHGJHDFGKJDFGK
#include "EHFun.h"
extern "C" MY_DLL int Add(int a, int b)
{
    printf("EHPacketLib's Add Function\n");
    return a + b;
}