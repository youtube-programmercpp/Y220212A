int main()
{
	int a = 10;
	int b = -  a;//単項演算子 unary operator

	int c = sizeof a; //変数 a の大きさ（メモリサイズ）
	//バイトとは
	// int 型が４バイトというのは個別のコンパイラによって決まってくる
	// ６４ビットCPUでは int 型は 8 バイトとするのが自然とも言える


	// char 型１個分の大きさを１バイトとする

	char x[10];
	int d = sizeof x;

	int e = sizeof (double);

	double value = 0.1;
	float value2 = 0.1f;


}
