#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num, cnt = 0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("1〜1000の中で当たりの数を予想してください\n");
	do
	{
		printf("当たりの数は?->");
		scanf("%d", &num);
		if (ans > num)
		{
			printf("当たりの数より小さいです\n");
		}
		if (ans < num)
		{
			printf("当たりの数より大きいです\n");
		}
		cnt++;
	} while (ans != num);
	printf("正解!%d回で当たりました\n", cnt);
}