#include<stdio.h>
main()
{
	char moji[20];
	int cnt;
	printf("�������?");
	scanf("%s", &moji[0]);
	cnt = 0;
	while (moji[cnt] != '\0') {
		cnt++;
	}
	printf("������:%s	������:%d����\n", moji, cnt);
	cnt = 0;
	while (1) {
		if (moji[cnt] == '\0') break;
		cnt++;
	}
}