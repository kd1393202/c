#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;
	printf("���l�́H (0�`6)\t");
	scanf("%d", &i);
	puts(day[i]);
}