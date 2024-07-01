#include<stdio.h>
main()
{
	int a = 0;
	printf("整数(-999 で入力終了)?");
	scanf("%d", &a);
	while (a != -999)
	{
		printf("8進数 = %o\t16進数 = %x\n", a, a);
		printf("整数(-999 で入力終了)?");
		scanf("%d", &a);
	}
}