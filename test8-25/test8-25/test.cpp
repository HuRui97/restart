#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)//比较两个整型值函数
{
	return *(int*)e1 - *(int*)e2;//强制类型转换
	//函数要求e1>e2，输出>0;e1=e2,输出0；e1<e2，输出<0
}

int cmp_Stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_Stu_name(const void* e1, const void* e2)
{
	//字符串比较不能直接用<>=号，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}





void Swap(char* buf1, char* buf2, int width)
//char*类型，每次只能交换一个字节，用循环交换width次
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2)/*回调int比较函数，将返回值传递至此*/)
//相当于实现qsort函数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				//void类型无法确定步长，转化为char后一次走一个字节，乘每个元素长度即可
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//交换函数，传递元素，元素大小
			}
		}
	}
}


void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int/*回调int比较函数*/);//进入冒泡函数
}


void test5()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_age);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_name);
}


int main()
{


	test4();
	test5();


	return 0;
}