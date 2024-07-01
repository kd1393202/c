#include<stdio.h>
main()
{
	char a[20], b[20];
	int i = 0, j = 0;
	printf("•¶Žš—ñ1?");
	//gets_s(a, 20);
	scanf("%[^\n]", a);
	printf("•¶Žš—ñ2?");
	//gets_s(b, 20);
	scanf(" %[^\n]", b);

	while (a[i] != '\0')
	{
		i++;
	}
	a[i] = ' ';
	i++;
	while (b[j] != '\0')
	{
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("%s", a);
}