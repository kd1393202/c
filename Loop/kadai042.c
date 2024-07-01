#include<stdio.h>
main()
{
	int a = 1, gokei = 1;
	printf("%d", a);
	while (gokei <= 300)
	{
		a++;
		gokei += a;
		printf("+%d", a);
	}
	printf("=%d\n", gokei);
}