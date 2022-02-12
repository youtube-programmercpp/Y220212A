void f1(char a);
void f2(char a);
#pragma comment(lib, "Dll1")
int main()
{
	f1(1);
	f2(1);
}
