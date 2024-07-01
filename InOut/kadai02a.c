#include<stdio.h>
main()
{
	double da, db;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%lf%lf", &da, &db);
	printf("* * * %f ‚Æ %f ‚Ì l‘¥‰‰Z * * *\n", da, db);
	printf("˜a = %f	· = %f	Ï = %f ¤ = %f\n", da + db, da - db, da * db, da / db);
}