#include<stdio.h>
main()
{
	int i, goukei;
	/*�z��̐擪�v�f���̂ݏȗ��ł���*/

	int a[][3] = { {10, 20, 30},{1, 2, 3} };
	for (goukei = 0, i = 0; i <= 2; i++) {
		printf("a[0][%d] = %d\n",i, a[0][i]);
		goukei += a[0][i];
	}
	printf("0�s�ڂ̍��v= %d\n\n", goukei);
	for (goukei = 0, i = 0; i <= 2; i++) {
		printf("a[1][%d] = %d\n", i, a[1][i]);
		goukei += a[1][i];
	}
	printf("1�s�ڂ̍��v= %d\n", goukei);
}