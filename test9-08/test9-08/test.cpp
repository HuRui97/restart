#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//声明一个结构体类型
//声明一个学生类型，是想通过学生类型创建学生变量
//描述学生属性：名字电话性别
//struct Stu//结构体标签
//{
//	char name[20];
//	char tel[12];
//	char sex[10];
//	int age;
//	//结构体成员变量
//}s4,s5,s6;
////全局变量
//struct Stu s3;
//
//
//struct
//{
//	int a;
//	char b;
//}x;//匿名结构体类型,只能用一次
//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	//创建结构体变量
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
//}*psa;//匿名结构体指针
//
//
//int main()
//{
//	
//	return 0;
//}



//typedef struct Node//链表
//{
//	int data;//数据域
//	struct Node* next;//指针域
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




