#include<stdio.h>
main()
{
	char a;
	int i;
	printf("�A���t�@�x�b�g�̏�����?");
	scanf("%c", &a);
	a = a + 224;
	for (i = a; i < 'Z'; i++)
	{
		a++;
		printf("%c ", a);
	}
}