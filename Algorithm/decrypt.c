#include<stdio.h>
main()
{
	char s[80];
	int i;

	printf("�Í������������͂��Ă���������");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}
	printf("�������������%s\n", &s[0]);
}