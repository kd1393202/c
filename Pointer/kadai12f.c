#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int wk, * p_a, * p_b;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		p_a = a[i];
		p_b = b[i];
		for (j = 0; j < 5; j++)
		{
			wk = *p_a;
			*p_a = *p_b;
			*p_b = wk;
			p_a++;
			p_b++;
		}
	}

	printf("”z—ñ a\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	printf("”z—ñ b\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", b[i][j]);
		}
		printf("\n");
	}
}