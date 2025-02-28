#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef unsigned int UINT;

typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
} Skill;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
} Spec;
typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[skil_Num];
} Chara;
typedef struct {
	Spec sp;
	int rate;
} Mob;

void ChangeFlag(UINT* s);
void ChangeFlag(UINT* s);
main()
{
	UINT MyState = Base;
	//Mystate |= (Poison | Sleep);
	/*
	Mystate |= Poison;
	Mystate |= Sleep;
	*/
	DisplayStatus(Mystate);
	ChangeFlag(&Mystate);
	DisplayStatus(Mystate);
	ClearFlg(Mystate);
	DisplayStatus(Mystate);
}
void DisplayStatus(UINT s) {
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
}

void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}
void ClearFlg(UINT* s) {
	int a;
	while (1)
	{
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}