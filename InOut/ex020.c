#include<stdio.h>
main()
{
	char moji;

	printf("小文字を入力:");
	scanf("%c", &moji);

	printf("大文字に変換して%c\n", moji - 0x20);
}