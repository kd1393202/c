#include<stdio.h>
main()
{
	double da, db;
	printf("2つの実数値?");
	scanf("%lf%lf", &da, &db);
	if (da > db)
	{
		printf("大きいほうは = %f", da);
	}
	else
	{
		printf("大きいほうは = %f", db);
	}
}