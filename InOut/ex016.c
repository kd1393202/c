#include<stdio.h>
main()
{
	float no;
	printf("実数を入れて:");
	scanf("%f", &no);
	printf("2倍すると%.2f\n", no * 2);
	printf("3倍すると%.2f\n", no * 3);
}