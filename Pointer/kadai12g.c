#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int c[5][5], * p_a, * p_c;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		p_a = a[i];
		p_c = c[i];
		for (j = 0; j < 5; j++)
		{
			p_a++;
		}
		p_a--;
		for (j = 0; j < 5; j++)
		{
			*p_c = *p_a;
			p_a--;
			p_c++;
		}
	}

	printf("”z—ñ c\n");
	for (i = 4; i >= 0; i--)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", c[i][j]);
		}
		printf("\n");
	}
}