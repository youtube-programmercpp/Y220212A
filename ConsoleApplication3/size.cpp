int main()
{
	int a = 10;
	int b = -  a;//�P�����Z�q unary operator

	int c = sizeof a; //�ϐ� a �̑傫���i�������T�C�Y�j
	//�o�C�g�Ƃ�
	// int �^���S�o�C�g�Ƃ����̂͌ʂ̃R���p�C���ɂ���Č��܂��Ă���
	// �U�S�r�b�gCPU�ł� int �^�� 8 �o�C�g�Ƃ���̂����R�Ƃ�������


	// char �^�P���̑傫�����P�o�C�g�Ƃ���

	char x[10];
	int d = sizeof x;

	int e = sizeof (double);

	double value = 0.1;
	float value2 = 0.1f;


}
