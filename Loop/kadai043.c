#include<stdio.h>
main()
{
	char a = 0;
	int b = 0;
	printf("文字コード(-1 で入力終了)?");
	scanf("%d", &b);
	while (b != -1)
	{
		a = b;
		printf("%c\n", a);
		printf("文字コード(-1 で入力終了)?");
		scanf("%d", &b);
	}
}