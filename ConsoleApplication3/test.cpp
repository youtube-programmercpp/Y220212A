#pragma comment(lib, "dll1")
#include <iostream>
int main()
{
	short a, b;
	if (std::cin >> a >> b) {
		char __declspec(dllexport) f3(char a, char b);
		void __declspec(dllexport) f4(char a, char b, char& c);

		f3(static_cast<char>(a), static_cast<char>(b));
		char c;
		f4(static_cast<char>(a), static_cast<char>(b), c);
	}
}
