#include<stdio.h>
main()
{
	int su, k;
	k = 0;
	while (1)
	{
		printf("��������:");
		scanf("%d", &su);
		if (su == -999)break;
		k += su;
	}
	printf("���v%d", k);
}