#include<stdio.h>
main()
{
	int a, gokei = 0;
	double gokei2 = 0, i = 0;
	while (1)
	{
		printf("����(-999 �ŏI��)?");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		gokei += a;
		i++;
	}
	gokei2 = gokei / i;
	printf("���v = %d\n���� = %.3f\n", gokei, gokei2);
}