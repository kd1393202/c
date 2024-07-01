#include<stdio.h>
main()
{
	float box[3], goukei = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		goukei += box[i];
	}

	printf("‡Œv‚Í%.2f‚Å‚·\n", goukei);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", goukei / 3);
}