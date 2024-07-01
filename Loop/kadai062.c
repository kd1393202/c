#include<stdio.h>
main()
{
	int a = 20;
	do
	{
		printf("%2d ", a);
		a--;
	} while (a > 10);
	printf("\n");
	do
	{
		printf("%2d ", a);
		a--;
	} while (a > 0);
	printf("\n");
}