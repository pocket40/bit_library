#pragma once
#ifdef AIDFDJFHKJDFHJKSDFHDFHGJHDFGKJDFGK
#define MY_DLL __declspec(dllexport)
#else
#define MY_DLL __declspec(dllimport)
#endif

extern "C" MY_DLL int Add(int a, int b);
