#include "pch.h"
#include <iostream>
#include <limits.h>
void f2(char a)
{
	if (a < CHAR_MAX + 1) {
		std::cout << "a�̒l��" << a << "�ł���A" << CHAR_MAX + 1 << " �����ł��B\n";
	}
	else {
		std::cout << "a�̒l��" << a << "�ł���A" << CHAR_MAX + 1 << " �ȏ�ł��B\n";
	}
}
