#include<stdio.h>
main()
{
	char data1[] = "abcde";
	char data2[10];
	int i = 0;
	while (data1[i] != '\0')
	{
		data2[i] = data1[i];
		i++;
	}
	data2[i] = '\0';
	printf("(�R�s�[��)�z�� data1[] = %s\n", &data1[0]);
	printf("(�R�s�[��)�z�� data2[] = %s\n", &data2[0]);
}