#include<stdio.h>
main()
{
	char a = 0;
	int b = 0;
	printf("�����R�[�h(-1 �œ��͏I��)?");
	scanf("%d", &b);
	while (b != -1)
	{
		a = b;
		printf("%c\n", a);
		printf("�����R�[�h(-1 �œ��͏I��)?");
		scanf("%d", &b);
	}
}