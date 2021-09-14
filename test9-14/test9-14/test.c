#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>



//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//使用free释放一块动态开辟内存的一部分
//	//p指向的已不是原来的位置
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	//free(p);
//	//对同一块动态开辟的内存多次释放
//	//如果是空指针则不进行操作
//
//
//
//
//	//对动态开辟内存忘记释放（内存泄露）
//	while (1)
//	{
//		//malloc(1);
//		//Sleep(1000);
//
//	}
//	return 0;
//
//}




//void GetMemory(char* p)
////创建临时变量p，接收str的值，指向NULL（传值调用）
//{
//	p = (char*)malloc(100);
//	//p为形参，只在函数内部有效，函数结束之后动态开辟内存未释放且无法找到
//	//造成内存泄露
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//传递str指针的值
//	//函数调用后str仍是NULL
//	strcpy(str, "hello world");
//	//对NULL解引用，程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



void GetMemory(char** p)
{
	*p = (char*)malloc(100);

}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	if (str == NULL)
	{
		return 0;
	}
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}