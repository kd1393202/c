#include<stdio.h>
main()
{
	int a, gokei = 0;
	double gokei2 = 0, i = 0;
	printf("����(-999 �ŏI��)?");
	scanf("%d", &a);
	while (a != -999)
	{
		gokei += a;
		i++;
		printf("����(-999 �ŏI��)?");
		scanf("%d", &a);
	}
	gokei2 = gokei / i;
	printf("���v = %d\n���� = %.2f\n", gokei, gokei2);
}