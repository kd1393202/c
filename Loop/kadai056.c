#include<stdio.h>
main()
{
	char a;
	int i;
	printf("�A���t�@�x�b�g�̏�����?");
	scanf("%c", &a);
	for (i = a; i <= 'z'; i++)
	{
		printf("%c ", a);
		a++;
	}
}