#include<stdio.h>
main()
{
	int a, i;
	printf("����?");
	scanf("%d", &a);
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", a);
		a++;
	}
}