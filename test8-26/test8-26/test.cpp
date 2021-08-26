#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//首元素地址,4
	//printf("%d\n", sizeof(*arr));//首元素大小,1
	//printf("%d\n", sizeof(arr[1]));//下标为1的元素大小，1
	//printf("%d\n", sizeof(&arr));//整个数组的地址，4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4


	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	////printf("%d\n", strlen(*arr));//'a'
	////printf("%d\n", strlen(arr[1]));//'b'
	////printf("%d\n", strlen(&arr));//6
	////printf("%d\n", strlen(&arr+1));//随即
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
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p+1));//随机值
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