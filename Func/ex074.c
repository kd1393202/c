#include <stdio.h>
void display1(int a);
void display2(int* b);
main()
{
	int a, b;
	printf("����a(&a:%d)?:", &a);
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("����b(&b:%d)?:", &b);
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}

void display1(int n)
{
	printf("���la�́A%d�ł��B\n", n);
	n += 10;
	return;
}

void display2(int *n)
{
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}