#include<stdio.h>
main()
{
	int itbl[3] = { 10,20,30 };
	int* p_itbl;
	double dtbl[3] = { 10.0,20.0,30.0 };
	double* p_dtbl;
	p_itbl = itbl;
	p_itbl = &itbl[0];
	printf("p_itbl=%d\n", p_itbl);
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;
	printf("\np_itbl=%d\n", p_itbl);
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;
	printf("\np_itbl=%d\n", p_itbl);
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;
}