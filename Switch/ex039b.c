#include<stdio.h>
main()
{
	char shori;
	int su1, su2, su3;
	int s = 0;

	printf("���������:");
	scanf("%c", &shori);

	printf("���������:");
	scanf("%d%d", &su1, &su2, &su3);

	switch (shori)
	{
	case 'D':
	case 'd':
		s = su1;
		if (s < su2)
		{
			s = su2;
		}
		if (s < su3)
		{
			s = su3;
		}
		printf("�ő�l��%d�ł�\n", s);
		break;
	case 'S':
	case 's':
		s = su1;
		if (s > su2)
		{
			s = su2;
		}
		if (s > su3)
		{
			s = su3;
		}
		printf("�ŏ��l��%d�ł�\n", s);
		break;
	case 'G':
	case 'g':
		printf("���v��%d�ł�\n", su1 + su2 + su3);
		break;
	case 'H':
	case 'h':
		printf("���v��%.2f�ł�\n", (su1 + su2 + su3) / 3.0);
		break;
	default:
		printf("�G���[\n");
		break;
	}
}