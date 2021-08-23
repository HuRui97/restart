#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test(int arr[])
{}
void test(int arr[10])
{}
void test(int* arr)
{}
void test2(int*arr2[20])
{}
void test2(int **arr2)
{}

int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}

void test(int arr[3][5])
{}
void test(int(*arr)[5])
{}

int main()
{
	int arr[3][5] = { 0 };

	test(arr);
	return 0;
}


void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);//一级指针传参
	return 0;
}


int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", ADD(a, b));
	printf("%p\n", &ADD);//函数的地址
	printf("%p\n", ADD);//函数的地址
	//&函数名和函数名都是函数的地址
	int arr[10] = { 0 };
	int(*p)[10] = &arr;
	int (*pa)(int, int) = ADD;//函数指针
	printf("%d\n", (*pa)(2, 3));//调用函数指针
	return 0;
}



void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	 void (*p)(char*) = print;
	 (*p)("hello");
	return 0;
}