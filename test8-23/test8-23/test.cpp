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
	print(p, sz);//һ��ָ�봫��
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
	printf("%p\n", &ADD);//�����ĵ�ַ
	printf("%p\n", ADD);//�����ĵ�ַ
	//&�������ͺ��������Ǻ����ĵ�ַ
	int arr[10] = { 0 };
	int(*p)[10] = &arr;
	int (*pa)(int, int) = ADD;//����ָ��
	printf("%d\n", (*pa)(2, 3));//���ú���ָ��
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