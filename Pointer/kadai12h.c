#include<stdio.h>
main()
{
	char a[] = "kadai12h.c";
	char* p_a;
	p_a = a;
	printf("�z����e = ");
	while (*p_a != '\0')
	{
		printf("%c", *p_a);
		p_a++;
	}
}