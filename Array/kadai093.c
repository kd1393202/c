#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int i;
	printf("zñaÆzñbÌÁZÊðzñcÉi[·é\n");
	for (i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		c[i] += b[i];
	}
	printf("zñ a =");
	for (i = 0; i < 10; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
	printf("zñ b =");
	for (i = 0; i < 10; i++)
	{
		printf(" %d", b[i]);
	}
	printf("\n");
	printf("zñ c =");
	for (i = 0; i < 10; i++)
	{
		printf(" %d", c[i]);
	}
}