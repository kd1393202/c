#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("�����l1�H");
	scanf("%lf", p_a);
	printf("�����l2�H");
	scanf("%lf", p_b);
	printf("�傫���ق���");
	if (*p_a > *p_b)
	{
		printf("%f", *p_a);
	}
	if (*p_a < *p_b)
	{
		printf("%f", *p_b);
	}
}