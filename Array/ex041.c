#include<stdio.h>
main()
{
	float box[3], goukei = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		goukei += box[i];
	}

	printf("合計は%.2fです\n", goukei);
	printf("平均は%.2fです\n", goukei / 3);
}