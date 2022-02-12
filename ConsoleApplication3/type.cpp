#include <limits.h>
int main()
{
	int   a = INT_MIN ;

	//a ‚ð -1 ‚µ‚æ‚¤‚Æ‚·‚éÛ
	//ŠÔˆá‚¢‚ª‹N‚«‚È‚¢‚æ‚¤ if •¶‚ÅŠm”F
	if (a > INT_MIN)
		--a;



	a = INT_MAX;
	++a;
	short b = SHRT_MIN;
	--b;
	b = SHRT_MAX;
	++b;
}
