#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *p);
	//	p = p + 1;//p++;
	//}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p = p + 2;//p+=2;
	}
	return 0;
}


int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;

	pa = NULL;
	//释放指针空间避免野指针
	//*pa = 10;(错误)
	//if (pa != NULL)
	//{
	//	//避免空指针
	//}
	return 0;
}


int main()
{
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", &arr[9] - &arr[0]);//9	得到中间元素个数
	printf("%d\n", &arr[0] - &arr[9]);//-9
	//printf("%d\n", &arr[9] - &ch[0]);错误写法，不同类型不兼容
	return 0;
}


int my_strlen(char*str)//用指针算字符串长度
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//数组名是1地址
	printf("%p\n", &arr[0]);
	//两个例外
	//1.&arr--&数组名，数组名不是首元素地址，表示整个数组。即&数组名取出的是整个数组地址
	//2.sizeof(arr)--sizeof(数组名).表示整个数组，sizeof(数组名)计算的是整个数组大小
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组可以通过指针访问
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d",arr[i]);//*(p+i)
	}
	/*for (i = 0; i < 10; i++)
	{
		printf("%p==%p\n", p + i, &arr[i]);
	}*/
	return 0;
}

int main()
{
	int a = 10;
	int* pa = &a;//一级指针
	int** ppa = &pa;//二级指针，存放a的地址的地址
	return 0;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}