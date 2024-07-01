#include<stdio.h>
main()
{
	char m;

	printf("文字を入力:");
	scanf("%c", &m);

	if (m >= 'A' && m <= 'Z')
	{
		printf("変換すると%c\n", m + 0x20);
	}
	else
	{
		if (m >= 'a' && m <= 'z')
		{
			printf("変換すると%c\n", m - 0x20);
		}
		else
		{
			printf("エラーメッセージ\n");
		}
	}
}