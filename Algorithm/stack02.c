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
		printf("\n\n◆プッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");

		if (key == 'i')
		{
			printf("データ入力＞");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n※※※スタックが一杯です※※※\n");
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
				printf("\n※※※スタックが空です※※※\n");
			}
			else
			{
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	fprintf("\n＝＝＝現在のキューの内容＝＝＝\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head)
		{
			printf("←headが示している所(現在headは%d)", head);
		}
		if (i == tail)
		{
			printf("←tailが示している所(現在tailは%d)", tail);
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
