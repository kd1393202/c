#include<stdio.h>
main()
{
	char a;
	int i, j, k = 32;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = k;
			printf("%x %c ", k, a);
			k++;
		}
		printf("\n");
	}
	for (j = 0; j < 5; j++)
	{
		a = k;
		printf("%x %c ", k, a);
		k++;
	}
	printf("\n");
}