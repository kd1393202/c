#include<stdio.h>
main()
{
	int a, b;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	printf("�֐����s�O�̒l:\na=%d\tb=%d\n", a, b);
	swap(&a, &b);
	printf("�֐����s�O�̒l:\na=%d\tb=%d\n", a, b);
}
void swap(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}