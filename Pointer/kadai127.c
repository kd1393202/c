#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data;
	double i = 0;
	printf("�z��̓��e\n");
	printf("�z�� data[ ] = ");
	p_data = data;

	for (i = 0; i < 5; i++)
	{
		printf("%f, ", *p_data);
		p_data++;
	}

	printf("\b\b \n");
	printf("���v = ");
	p_data = data;
	while (*p_data != 0)
	{
		i += *p_data;
		p_data++;
	}
	printf("%.3f", i);
	printf("\n");
	printf("���� = ");
	printf("%.3f", (float)i / 5);
}