#include<stdio.h>
main()
{
	char a;
	int i;
	printf("アルファベットの小文字?");
	scanf("%c", &a);
	for (i = a; i <= 'z'; i++)
	{
		printf("%c ", a);
		a++;
	}
}