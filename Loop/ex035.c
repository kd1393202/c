#include<stdio.h>
main()
{
	int su, k;
	k = 0;
	while (1)
	{
		printf("数を入れて:");
		scanf("%d", &su);
		if (su == -999)break;
		k += su;
	}
	printf("合計%d", k);
}