#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data;
	int c;
	int i = 0;
	printf("�|�C���^���Œ�ŕ\��\n");
	printf("�z�� data[ ] = ");
	p_data = &c;
	while (data[i] != -999)
	{
		c = data[i];
		printf("%d, ", *p_data);
		i++;
	}
	printf("\b\b ");
	printf("\n�|�C���^��ω������ĕ\��\n");
	printf("�z�� data[ ] = ");
	p_data = data;
	while (*p_data != -999)
	{
		printf("%d, ", *p_data);
		p_data++;
	}
	printf("\b\b ");
}