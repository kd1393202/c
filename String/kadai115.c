#include<stdio.h>
main()
{
	char moji[20];
	int i = 0;
	printf("�������?");
	scanf("%s", &moji[0]);
	while (moji[i] != '\0')
	{
		putchar(moji[i]);
		printf("\n");
		i++;
	}
}