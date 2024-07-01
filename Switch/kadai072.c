#include<stdio.h>
main()
{
	char a;
	printf("アルファベット?");
	scanf(" %c", &a);
	switch (a)
	{
	case 'a':
		printf("America\nAustralia\n");
		break;
	case 'e':
		printf("England\n");
		break;
	case 'f':
		printf("France\n");
		break;
	case 'j':
		printf("Japan\n");
		break;
	default:
		printf("その他です %c\n", a);
		break;
	}
}