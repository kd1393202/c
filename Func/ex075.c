#include <stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo, int* ama);
main()
{
	int a, b, c, d, e, f, g;
	printf("���l1?:");
	scanf("%d", &a);
	printf("���l2?:");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f, &g);
	puts("���l1�Ɛ��l2�̎l�����Z");
	printf("�a:%d ��:%d ��:%d ��:%d �]:%d\n", c, d, e, f, g);
}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo, int* ama)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	*ama = x % y;
}