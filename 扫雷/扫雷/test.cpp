#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};//存储布置好雷的信息
	char show[ROWS][COLS] = { 0 };//存储排查出雷的信息
	InitBoard(mine, ROWS, COLS, '0');//初始化
	InitBoard(show, ROWS, COLS, '*');//初始化
	//DisplayBoard(mine, ROW, COL);//打印，但不打印外圈
	DisplayBoard(show, ROW, COL);//打印，但不打印外圈
	SetMine(mine, ROW, COL);//布雷
	//DisplayBoard(mine, ROW, COL);//打印布雷
	FindMine(mine, show, ROW, COL);//扫雷
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳生成随机数
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
			
	} while (input);
}

int main()
{
	test();
	return 0;
}