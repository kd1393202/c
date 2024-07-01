#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i, k[20], n;
	srand(time(0));
	rand();

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s\n", s);
}