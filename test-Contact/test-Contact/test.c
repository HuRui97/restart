#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"


void menu()
{
	printf("********************************\n");
	printf("****1.add************2.del******\n");
	printf("****3.search*********4.modify***\n");
	printf("****5.show***********6.sort*****\n");
	printf("****0.exit**********************\n");
	printf("********************************\n");
}

int main()
{
	int input = 0;
	struct Contact con;//con����ͨѶ¼,�ں�1000���ṹ��Ԫ�ص����鼰size

	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			Sortcontact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);
	return 0;
}