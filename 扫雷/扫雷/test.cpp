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
	char mine[ROWS][COLS] = {0};//�洢���ú��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�洢�Ų���׵���Ϣ
	InitBoard(mine, ROWS, COLS, '0');//��ʼ��
	InitBoard(show, ROWS, COLS, '*');//��ʼ��
	//DisplayBoard(mine, ROW, COL);//��ӡ��������ӡ��Ȧ
	DisplayBoard(show, ROW, COL);//��ӡ��������ӡ��Ȧ
	SetMine(mine, ROW, COL);//����
	//DisplayBoard(mine, ROW, COL);//��ӡ����
	FindMine(mine, show, ROW, COL);//ɨ��
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ������������
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
			
	} while (input);
}

int main()
{
	test();
	return 0;
}