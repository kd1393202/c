#include<stdio.h>
#include<string.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit fdat;
	strcpy(fdat.name, "peach");
	fdat.price = 300;
	fdat.point = 5;
	fdat.number = 3;
	fdat.total = fdat.price * fdat.number;
	printf("���i���F%s\n", fdat.name);
	printf("���i�F%d�~\n", fdat.price);
	printf("�������ߓx�F");
	for (int i = 0; i < fdat.point; i++)
	{
		printf("��");
	}
	printf("\n���F%d\n", fdat.number);
	printf("���z�F��%d-\n", fdat.total);
}