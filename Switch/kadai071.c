#include<stdio.h>
main()
{
	int a, b;
	char c;
	printf("®”1?");
	scanf("%d", &a);
	printf("®”2?");
	scanf("%d", &b);
	printf("‰‰Zq?");
	scanf(" %c", &c);
	switch (c)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d\n", a, b, a / b);
		break;
	case '%':
		printf("%d % %d = %d\n", a, b, a % b);
		break;
	default:
		printf("‚»‚Ì‘¼‚Å‚· %c\n", c);
		break;
	}
}