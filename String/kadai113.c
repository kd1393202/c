#include<stdio.h>
main()
{
	char moji[] = "GameSoft";
	int i = 0;
	while (moji[i] != '\0')
	{
		i++;
	}
	printf("文字列= %s\n文字数= %d 文字\n", moji, i);
}