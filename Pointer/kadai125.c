#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data;
	int c;
	int i = 0;
	printf("ポインタを固定で表示\n");
	printf("配列 data[ ] = ");
	p_data = &c;
	while (data[i] != -999)
	{
		c = data[i];
		printf("%d, ", *p_data);
		i++;
	}
	printf("\b\b ");
	printf("\nポインタを変化させて表示\n");
	printf("配列 data[ ] = ");
	p_data = data;
	while (*p_data != -999)
	{
		printf("%d, ", *p_data);
		p_data++;
	}
	printf("\b\b ");
}