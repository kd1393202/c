#include<stdio.h>
long bekijyou()
main()
{
	int a, b;
	long kotae;
	printf("数値1:");
	scanf("%d", &a);
	printf("数値2:");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%dの%d乗は%ld\n", a, b, kotae);
}
void swap(int a, int b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}