#include<stdio.h>
main()
{
	int a;
	char b;
	printf("10�i���̐���?");
	scanf("%d", &a);
	printf("�A���t�@�x�b�g (o or h or d) ?");
	scanf(" %c", &b);
	switch (b)
	{
	case 'o':
		printf("%o\n", a);
		break;
	case 'h':
		printf("%x\n", a);
		break;
	default:
		printf("%d\n", a);
		break;
	}
}