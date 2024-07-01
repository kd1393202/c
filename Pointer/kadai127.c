#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data;
	double i = 0;
	printf("配列の内容\n");
	printf("配列 data[ ] = ");
	p_data = data;

	for (i = 0; i < 5; i++)
	{
		printf("%f, ", *p_data);
		p_data++;
	}

	printf("\b\b \n");
	printf("合計 = ");
	p_data = data;
	while (*p_data != 0)
	{
		i += *p_data;
		p_data++;
	}
	printf("%.3f", i);
	printf("\n");
	printf("平均 = ");
	printf("%.3f", (float)i / 5);
}