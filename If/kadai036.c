#include<stdio.h>
main()
{
	int a, b;
	printf("����1?");
	scanf("%d", &a);
	printf("����2?");
	scanf("%d", &b);
	if (a > b)
	{
		printf("%d �̕��� %d ��� %d �傫��\n", a, b, a - b);
	}
	else
	{
		if (a == b)
		{
			printf("%d �� %d �͓�����\n", a, b);
		}
		else
		{	
				printf("%d �̕��� %d ��� %d ������\n", a, b, b - a);	
		}
	}
}