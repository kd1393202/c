#include<stdio.h>
main()
{
	FILE* fp;
	char str[256];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	fprintf(fp, "%d+%d=%d\n", a, b, a + b);
	fclose(fp);
}