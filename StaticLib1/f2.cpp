#include "pch.h"
#include <iostream>
#include <limits.h>
void f2(char a)
{
	if (a < CHAR_MAX + 1) {
		std::cout << "aの値は" << a << "であり、" << CHAR_MAX + 1 << " 未満です。\n";
	}
	else {
		std::cout << "aの値は" << a << "であり、" << CHAR_MAX + 1 << " 以上です。\n";
	}
}
