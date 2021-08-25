#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)//�Ƚ���������ֵ����
{
	return *(int*)e1 - *(int*)e2;//ǿ������ת��
	//����Ҫ��e1>e2�����>0;e1=e2,���0��e1<e2�����<0
}

int cmp_Stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_Stu_name(const void* e1, const void* e2)
{
	//�ַ����Ƚϲ���ֱ����<>=�ţ�Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}





void Swap(char* buf1, char* buf2, int width)
//char*���ͣ�ÿ��ֻ�ܽ���һ���ֽڣ���ѭ������width��
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

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2)/*�ص�int�ȽϺ�����������ֵ��������*/)
//�൱��ʵ��qsort����
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				//void�����޷�ȷ��������ת��Ϊchar��һ����һ���ֽڣ���ÿ��Ԫ�س��ȼ���
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//��������������Ԫ�أ�Ԫ�ش�С
			}
		}
	}
}


void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int/*�ص�int�ȽϺ���*/);//����ð�ݺ���
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