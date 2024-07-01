#include<stdio.h>
main()
{
	int ia, b;
	printf("整数?");
	scanf("%d", &ia);
	b = ia % 2;
	if (b == 0)
	{
		printf("その数は「偶数」です\n");
	}
	else
	{
		printf("その数は「奇数」です\n");
	}
}