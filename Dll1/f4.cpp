#include "pch.h"
#pragma comment(lib, "Dll1")
int __declspec(dllexport) f4(char a, char b)
{
	return a + b;
}
