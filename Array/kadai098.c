#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max = 0, min = 999, i;
	for (i = 0; i < 10; i++)
	{
		if (max < data[i])
		{
			max = data[i];
		}
		if (min > data[i])
		{
			min = data[i];
		}
	}
	printf("”z—ñ data =");
	for (i = 0; i < 10; i++)
	{
		printf(" %d", data[i]);
	}
	printf("\n");
	printf("Å‘å’l = %d\tÅ¬’l = %d", max, min);
}