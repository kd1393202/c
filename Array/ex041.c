#include<stdio.h>
main()
{
	float box[3], goukei = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		goukei += box[i];
	}

	printf("���v��%.2f�ł�\n", goukei);
	printf("���ς�%.2f�ł�\n", goukei / 3);
}