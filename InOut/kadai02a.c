#include<stdio.h>
main()
{
	double da, db;
	printf("2�̎����l?");
	scanf("%lf%lf", &da, &db);
	printf("* * * %f �� %f �� �l�����Z * * *\n", da, db);
	printf("�a = %f	�� = %f	�� = %f �� = %f\n", da + db, da - db, da * db, da / db);
}