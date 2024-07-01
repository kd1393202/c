#include<stdio.h>
main()
{
	int i, j, a = 1;
	printf("    1  2  3  4  5  6  7  8  9\n==============================\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d |", a);
		for (j = 1; j <= 9; j++)
		{
			printf(" %d", a * j);
		}
		a++;
		printf("\n");
	}
}