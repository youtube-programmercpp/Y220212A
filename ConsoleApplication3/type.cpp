#include <limits.h>
int main()
{
	int   a = INT_MIN ;

	//a �� -1 ���悤�Ƃ����
	//�ԈႢ���N���Ȃ��悤 if ���Ŋm�F
	if (a > INT_MIN)
		--a;



	a = INT_MAX;
	++a;
	short b = SHRT_MIN;
	--b;
	b = SHRT_MAX;
	++b;
}
