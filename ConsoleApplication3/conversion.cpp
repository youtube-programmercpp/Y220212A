int main()
{
	short a = 100;
	//C++�̏�����
	auto b = a + 1;

	//suffix �ڔ���
	auto c = 1.f + 20000001.;
	//�L���X�g���Z�q

	auto d = (char)'a' + 1L;

	"a";//������ string  �� char �^�̔z��
	'a';//���� character �� C++ �ł� char �^�AC ����ł� int �^

	auto e = 2U;
	auto f = 2ULL;//���������U�S�r�b�g�����iVisual Studio �� C/C++ �̏ꍇ�j

}
