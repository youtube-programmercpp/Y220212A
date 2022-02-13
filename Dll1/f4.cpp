#include "pch.h"
void __declspec(dllexport) f4(char a, char b, char& c)
{
	c = a + b;
}
