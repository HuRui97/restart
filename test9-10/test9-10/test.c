#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8
//
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	//0(浪费) 0100（截断的b）010（截断的a）  
//	// 	   22
//	//000(浪费) 00011（c）
//	// 	   03
//	//0000(浪费) 0100(d)
//	//     04 
//
//	return 0;
//}