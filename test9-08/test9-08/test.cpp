#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ�����ʹ���ѧ������
//����ѧ�����ԣ����ֵ绰�Ա�
//struct Stu//�ṹ���ǩ
//{
//	char name[20];
//	char tel[12];
//	char sex[10];
//	int age;
//	//�ṹ���Ա����
//}s4,s5,s6;
////ȫ�ֱ���
//struct Stu s3;
//
//
//struct
//{
//	int a;
//	char b;
//}x;//�����ṹ������,ֻ����һ��
//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	//�����ṹ�����
//
//	return 0;
//}




//struct
//{
//	int a;
//	char b;
//}sa;
//
//
//struct
//{
//	int a;
//	char b;
//}*psa;//�����ṹ��ָ��
//
//
//int main()
//{
//	
//	return 0;
//}



//typedef struct Node//����
//{
//	int data;//������
//	struct Node* next;//ָ����
//}Node;
//
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//struct T
//{
//	double weight;
//	short a;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s1 = { 'c',{55.1,30},100,3.14,"hello" };
//	printf("%c %lf %d %d %lf %s\n", s1.c,s1.st.weight,s1.st.a,s1.a, s1.d, s1.arr);
//	
//	return 0;
//}



struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));

	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));

	return 0;
}




