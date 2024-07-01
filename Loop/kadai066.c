#include<stdio.h>
main()
{
	int a = 1, gokei = 1;
	printf("%d", a);
	do
	{
		a++;
		gokei += a;
		printf("+%d", a);
	} while (gokei <= 300);
	printf("=%d\n", gokei);
}