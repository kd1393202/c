#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* p_data;
	int i = 0;
	int max = 0, min = 999;
	printf("配列の内容\n");
	printf("data[ ] = ");
	p_data = data;
	while (*p_data != 0)
	{
		printf("%d, ", *p_data);
		p_data++;
	}
	printf("\b\b \n");
	p_data = data;
	printf("最大値 = ");
	while (*p_data != 0)
	{
		if (max < *p_data)
		{
			max = *p_data;
		}
		p_data++;
	}
	printf("%d\n", max);
	p_data = data;
	printf("最小値 = ");
	while (*p_data != 0)
	{
		if (min > *p_data)
		{
			min = *p_data;
		}
		p_data++;
	}
	printf("%d\n", min);
}