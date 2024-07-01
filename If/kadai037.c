#include<stdio.h>
main()
{
	int a;
	printf("0 から 100 までの整数?");
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("その数値の判定結果は「5」です\n");
	}
	else
	{
		if (a >= 80 && a < 90)
		{
			printf("その数値の判定結果は「4」です\n");
		}
		else
		{	
			if (a >= 50 && a < 80)
			{
				printf("その数値の判定結果は「3」です\n");
			}
			else
			{
				if (a >= 30 && a < 50)
				{
					printf("その数値の判定結果は「2」です\n");
				}
				else
				{
					printf("その数値の判定結果は「1」です\n");
				}
			}
		}
	}
}