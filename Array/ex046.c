#include<stdio.h>
main()
{
	int i, goukei, j;
	int a[][3] = { {10, 20, 30},{1, 2, 3} };
	for (j = 0; j < 2; j++) {
		for (goukei = 0, i = 0; i <= 2; i++) {
			printf("a[%d][%d] = %d\n", j, i, a[j][i]);
			goukei += a[j][i];
		}
		printf("%ds–Ú‚Ì‡Œv= %d\n", j, goukei);
	}
}