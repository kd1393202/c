#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* p_a = a;
	float* p_b = b;
	int i, a_sum = 0;
	float b_sum = 0;
	for (i = 0; i < 6; i++)
	{
		a_sum += *p_a;
		p_a++;
	}
	printf("zña v=%d\t\t½Ï=%.3f\n", a_sum, (float)a_sum / 6);
	for (i = 0; i < 4; i++)
	{
		b_sum += *p_b;
		p_b++;
	}
	printf("zñb v=%.3f\t½Ï=%.3f\n", b_sum, b_sum / 4);
}