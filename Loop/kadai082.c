#include<stdio.h>
main()
{
	int a, i = 0;
	double gokei = 0;
	while (1)
	{
		printf("®”(-999 ‚ÅI—¹)?");
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
	printf("‡Œv = %.0f\n•½‹Ï = %.3f\n", gokei, gokei / i);
}