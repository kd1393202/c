#include<stdio.h>
main()
{
	char a;
	int i;
	printf("アルファベットの小文字?");
	scanf("%c", &a);
	a = a + 224;
	for (i = a; i < 'Z'; i++)
	{
		a++;
		printf("%c ", a);
	}
}