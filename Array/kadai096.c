#include<stdio.h>
main()
{
	int c[10];
	int i = 0, j, a;
	while (i < 10)
	{
		printf("®”(-999 ‚ÅI—¹)?");
		scanf(" %d", &a);
		if (a == -999)
		{
			break;
		}
		c[i] = a;
		i++;
	}
	printf("”z—ñ c =");
	for (j = 0; j < i; j++)
	{
		printf(" %d", c[j]);
	}
}