#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	//局部数组，出函数销毁
//	return p;
//}
////返回栈空间地址的问题
//
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//虽然指向p，但p的内容已被销毁
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	static int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}



//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//未释放空间，导致内存泄露
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//释放了但未置空
//	if (str != NULL)
//		//str已经被释放，成为野指针
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}





