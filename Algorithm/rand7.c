#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num, cnt = 0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("1�`1000�̒��œ�����̐���\�z���Ă�������\n");
	do
	{
		printf("������̐���?->");
		scanf("%d", &num);
		if (ans > num)
		{
			printf("������̐���菬�����ł�\n");
		}
		if (ans < num)
		{
			printf("������̐����傫���ł�\n");
		}
		cnt++;
	} while (ans != num);
	printf("����!%d��œ�����܂���\n", cnt);
}