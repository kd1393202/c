#include<stdio.h>
main()
{
	int a = 0;
	printf("����(-999 �œ��͏I��)?");
	scanf("%d", &a);
	while (a != -999)
	{
		printf("8�i�� = %o\t16�i�� = %x\n", a, a);
		printf("����(-999 �œ��͏I��)?");
		scanf("%d", &a);
	}
}