#include<stdio.h>
main()
{
	char a[] = "kadai12h.c";
	char* p_a;
	p_a = a;
	printf("”z—ñ“à—e = ");
	while (*p_a != '\0')
	{
		printf("%c", *p_a);
		p_a++;
	}
}