#include<stdio.h>
main()
{
	int a, gokei = 0;
	double gokei2 = 0, i = 0;
	printf("®”(-999 ‚ÅI—¹)?");
	scanf("%d", &a);
	do
	{
		gokei += a;
		i++;
		printf("®”(-999 ‚ÅI—¹)?");
		scanf("%d", &a);
	} while (a != -999);
	gokei2 = gokei / i;
	printf("‡Œv = %d\n•½‹Ï = %f\n", gokei, gokei2);
}