#include<stdio.h>
main()
{
	int su1, su2, su3, goukei;

	printf("®”‚ğ3ŒÂ“ü—Í:");
	scanf("%d%d%d", &su1, &su2, &su3);

	goukei = su1 + su2 + su3;

	printf("‡Œv=%d", goukei);
	printf("	•½‹Ï=%.2f", goukei / 3.0);
	printf("	•½‹Ï=%.2f", (float)goukei / 3);
}