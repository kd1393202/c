#include<stdio.h>
main()
{
	int su1, su2, su3, goukei;

	printf("������3����:");
	scanf("%d%d%d", &su1, &su2, &su3);

	goukei = su1 + su2 + su3;

	printf("���v=%d", goukei);
	printf("	����=%.2f", goukei / 3.0);
	printf("	����=%.2f", (float)goukei / 3);
}