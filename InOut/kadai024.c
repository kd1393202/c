#include<stdio.h>
main()
{
	int ia, ib;
	printf("2つの数値?");
	scanf("%d%d", &ia, &ib);
	printf("* * * %d と %d の 四則演算 * * *\n", ia, ib);
	printf("%d + %d = %d\n", ia, ib, ia + ib);
	printf("%d - %d = %d\n", ia, ib, ia - ib);
	printf("%d * %d = %d\n", ia, ib, ia * ib);
	printf("%d / %d = %d あまり %d\n", ia, ib, ia / ib, ia % ib);
}