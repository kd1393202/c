#include<stdio.h>
main()
{
	int a, gokei = 0;
	double gokei2 = 0, i = 0;
	while (1)
	{
		printf("®”(-999 ‚ÅI—¹)?");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		gokei += a;
		i++;
	}
	gokei2 = gokei / i;
	printf("‡Œv = %d\n•½‹Ï = %.3f\n", gokei, gokei2);
}