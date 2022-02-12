#include "pch.h"
#include <iostream>
void __declspec(dllexport) f1(char a)
{
	if (a < 5) {
		std::cout << "aの値は" << a << "であり、5 未満です。\n";
	}
	else {
		std::cout << "aの値は" << a << "であり、5 以上です。\n";
	}
}
