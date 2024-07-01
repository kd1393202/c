#include<stdio.h>
main()
{
	char a;
	printf("1文字入力?");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("アルファベット\n");
	}
	else
	{
		if (a >= 'a' && a <= 'z')
		{
			printf("アルファベット\n");
		}
		else
		{
			printf("ERROR\n");
		}
	}
}