#include <stdio.h>
#include	
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);
int

main() 
{
	int key, data, result;
	do
	{
		printf("\n\n���v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		if (key == 'i')
		{
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n�������X�^�b�N����t�ł�������\n");
			}
			else
			{
				display();
			}
		}

		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n�������X�^�b�N����ł�������\n");
			}
			else
			{
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	fprintf("\n���������݂̃L���[�̓��e������\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head)
		{
			printf("��head�������Ă��鏊(����head��%d)", head);
		}
		if (i == tail)
		{
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

int enqueue(int d)
{
	if ()
	{
		return -1;
	}
	queue = [tail] = b;

	tail = tail % QUEUESIZE;
	return 0;
}
