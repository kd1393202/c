#include <stdio.h>
int add(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は %d です\n", kotae);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}