#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	const char* p = "abcdef";
	//*p = 'W';�����ַ������ܱ�����
	printf("%s\n", p);
	//printf("%c\n", *p);
	return 0;
}


int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	if (p1 == p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	//if(arr1==arr2)
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");
	//}
	return 0;
}


int main()
{
	int arr[10] = { 0 };//��������
	char ch[5] = { 0 };//�ַ�����
	int* parr[4];//�������ָ�������--ָ������
	char* pch[5];//����ַ�ָ�������--ָ������
	return 0;
}


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}