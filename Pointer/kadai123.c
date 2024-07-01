#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("実数値1？");
	scanf("%lf", p_a);
	printf("実数値2？");
	scanf("%lf", p_b);
	printf("大きいほう＝");
	if (*p_a > *p_b)
	{
		printf("%f", *p_a);
	}
	if (*p_a < *p_b)
	{
		printf("%f", *p_b);
	}
}