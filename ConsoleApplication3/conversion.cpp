int main()
{
	short a = 100;
	//C++の書き方
	auto b = a + 1;

	//suffix 接尾辞
	auto c = 1.f + 20000001.;
	//キャスト演算子

	auto d = (char)'a' + 1L;

	"a";//文字列 string  → char 型の配列
	'a';//文字 character → C++ では char 型、C 言語では int 型

	auto e = 2U;
	auto f = 2ULL;//符号無し６４ビット整数（Visual Studio の C/C++ の場合）

}
