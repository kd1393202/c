#include<stdio.h>
main()
{
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30}
	,{33,36,39,42,45},{48,51,54,57,60}
	,{63,66,69,72,75} };
	int c[5][5], i, j;
	for (j = 0; j < 5; j++) {
		for (i = 0; i < 5; i++) {
			c[j][i] = b[j][i];
			printf("%3d ", c[j][i]);
		}
		printf("\n");
	}
}