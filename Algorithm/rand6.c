#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int player, cpu;
	printf("�����o���܂���?\n (1:�O�[ 2:�`���L 3:�p�[)��");
	scanf("%d", &player);
	player--;
	if (player == 0) printf("�v���C���[�̓O�[�ł��B\n");
	if (player == 1) printf("�v���C���[�̓`���L�ł��B\n");
	if (player == 2) printf("�v���C���[�̓p�[�ł��B\n");
	srand(time(0));
	rand();
	cpu = rand() % 3 + 1;
	if (cpu == 0) printf("�R���s���[�^�̓O�[�ł��B\n");
	if (cpu == 1) printf("�R���s���[�^�̓`���L�ł��B\n");
	if (cpu == 2) printf("�R���s���[�^�̓p�[�ł��B\n");
	if (player == cpu)
	{
		printf("�������ł��B\n");
	}
	if (player == 0)
	{
		if (cpu == 1) printf("�v���C���[�̏����ł��B\n");
		if (cpu == 2) printf("�R���s���[�^�̏����ł��B\n");
	}
	if (player == 1)
	{
		if (cpu == 0) printf("�R���s���[�^�̏����ł��B\n");
		if (cpu == 2) printf("�v���C���[�̏����ł��B\n");
	}
	if (player == 2)
	{
		if (cpu == 0) printf("�v���C���[�̏����ł��B\n");
		if (cpu == 1) printf("�R���s���[�^�̏����ł��B\n");
	}
}