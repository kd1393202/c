#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int c, i;
	int* p_a, * p_b;

	printf("―――実行前―――\n");
	printf("配列 a[ ] = ");
	i = 0;
	while (a[i] != 0)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\b\b \n");
	printf("配列 b[ ] = ");
	i = 0;
	while (b[i] != 0)
	{
		printf("%d, ", b[i]);
		i++;
	}
	printf("\b\b \n");

	p_a = a;
	p_b = b;

	while (*p_a != 0)
	{
		c = *p_a;
		*p_a = *p_b;
		*p_b = c;
		p_a++;
		p_b++;
	}

	printf("―――実行後―――\n");
	printf("配列 a[ ] = ");
	i = 0;
	while (a[i] != 0)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\b\b \n");
	printf("配列 b[ ] = ");
	i = 0;
	while (b[i] != 0)
	{
		printf("%d, ", b[i]);
		i++;
	}
	printf("\b\b \n");
}