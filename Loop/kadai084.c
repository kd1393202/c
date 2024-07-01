#include<stdio.h>
main()
{
	int a, b;
	while (1)
	{
		printf("®”1(-999 ‚ÅI—¹)?");
		scanf(" %d", &a);
		if (a == -999)
		{
			break;
		}
		printf("®”2(-999 ‚ÅI—¹)?");
		scanf(" %d", &b);
		if (b == -999)
		{
			break;
		}
		if (b == 0)
		{
			continue;
		}
		printf("%d / %d = %d ‚ ‚Ü‚è %d\n", a, b, a / b, a % b);
	}
}