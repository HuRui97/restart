#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//��Ԫ�ص�ַ,4
	//printf("%d\n", sizeof(*arr));//��Ԫ�ش�С,1
	//printf("%d\n", sizeof(arr[1]));//�±�Ϊ1��Ԫ�ش�С��1
	//printf("%d\n", sizeof(&arr));//��������ĵ�ַ��4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4


	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	////printf("%d\n", strlen(*arr));//'a'
	////printf("%d\n", strlen(arr[1]));//'b'
	////printf("%d\n", strlen(&arr));//6
	////printf("%d\n", strlen(&arr+1));//�漴
	//printf("%d\n", strlen(&arr[0]+1));//5


//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p+1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1.p[0]==*(p+0)
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p+1));//4
//	//printf("%d\n", sizeof(&p[0]+1));//4
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p+1));//5
//	//printf("%d\n", strlen(*p));//'a'
//	//printf("%d\n", strlen(p[0]));//'a'
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p+1));//���ֵ
//	printf("%d\n", strlen(&p[0]+1));//5
//
//	return 0;
//}


int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));

	return 0;
}