#include<stdio.h>
main()
{
	int a = 1;
	do
	{
		printf("%2d ", a);
		a++;
	} while (a <= 10);
	printf("\n");
	do
	{
		printf("%2d ", a);
		a++;
	} while (a <= 20);
	printf("\n");
}