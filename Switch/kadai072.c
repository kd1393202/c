#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g?");
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
		printf("���̑��ł� %c\n", a);
		break;
	}
}