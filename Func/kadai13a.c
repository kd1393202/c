#include<stdio.h>
long bekijyou()
main()
{
	int a, b;
	long kotae;
	printf("”’l1:");
	scanf("%d", &a);
	printf("”’l2:");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%d‚Ì%dæ‚Í%ld\n", a, b, kotae);
}
void swap(int a, int b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}