#include<stdio.h>
main()
{
	double da, db;
	printf("2�̎����l?");
	scanf("%lf%lf", &da, &db);
	if (da > db)
	{
		printf("�傫���ق��� = %f", da);
	}
	else
	{
		printf("�傫���ق��� = %f", db);
	}
}