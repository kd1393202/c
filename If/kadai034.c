#include<stdio.h>
main()
{
	char a;
	printf("1��������?");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("�A���t�@�x�b�g\n");
	}
	else
	{
		if (a >= 'a' && a <= 'z')
		{
			printf("�A���t�@�x�b�g\n");
		}
		else
		{
			printf("ERROR\n");
		}
	}
}