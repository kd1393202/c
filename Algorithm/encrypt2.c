#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i, k[20], n;
	srand(time(0));
	rand();

	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
		i++;
	}
	printf("暗号化文字列は%s\n", s);
}