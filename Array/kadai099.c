#include<stdio.h>
main()
{
	int a, i;
	char b[10];
	printf("回数と文字列を入力   ");
	scanf("%d%s", &a, &b);
	for (i = 0; i < a; i++)
	{
		printf("%s\t", b);
	}
}