#include <limits.h>
int main()
{
	int   a = INT_MIN ;

	//a を -1 しようとする際
	//間違いが起きないよう if 文で確認
	if (a > INT_MIN)
		--a;



	a = INT_MAX;
	++a;
	short b = SHRT_MIN;
	--b;
	b = SHRT_MAX;
	++b;
}
