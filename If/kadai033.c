#include<stdio.h>
main()
{
	char a;
	printf("アルファベット?");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("その文字は「小文字」です\n");
	}
	if (a >= 'A' && a <= 'Z')
	{
		printf("その文字は「大文字」です\n");
	}
}