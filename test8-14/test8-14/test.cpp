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
	//�ͷ�ָ��ռ����Ұָ��
	//*pa = 10;(����)
	//if (pa != NULL)
	//{
	//	//�����ָ��
	//}
	return 0;
}


int main()
{
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", &arr[9] - &arr[0]);//9	�õ��м�Ԫ�ظ���
	printf("%d\n", &arr[0] - &arr[9]);//-9
	//printf("%d\n", &arr[9] - &ch[0]);����д������ͬ���Ͳ�����
	return 0;
}


int my_strlen(char*str)//��ָ�����ַ�������
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
	printf("%p\n", arr);//��������1��ַ
	printf("%p\n", &arr[0]);
	//��������
	//1.&arr--&��������������������Ԫ�ص�ַ����ʾ�������顣��&������ȡ���������������ַ
	//2.sizeof(arr)--sizeof(������).��ʾ�������飬sizeof(������)����������������С
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//�������ͨ��ָ�����
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
	int* pa = &a;//һ��ָ��
	int** ppa = &pa;//����ָ�룬���a�ĵ�ַ�ĵ�ַ
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