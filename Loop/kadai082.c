#include<stdio.h>
main()
{
	int a, i = 0;
	double gokei = 0;
	while (1)
	{
		printf("����(-999 �ŏI��)?");
		scanf(" %d", &a);
		if (a == -999)
		{
			break;
		}
		if (a < 0)
		{
			continue;
		}
		gokei += a;
		i++;
	}
	printf("���v = %.0f\n���� = %.3f\n", gokei, gokei / i);
}