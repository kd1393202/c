#include<stdio.h>
main()
{
	char c;
	char* p_c = &c;
	printf("1�������́H");
	scanf("%c", &c);
	c++;
	printf("���̕�����");
	printf("%c", *p_c);
}