#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
// 
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0]+1));//4
//	printf("%d\n", sizeof(*a[0]+1));//4
//	printf("%d\n", sizeof(a+1));//4
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4
//	printf("%d\n", sizeof(*(&a[0]+1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//数组后一个内存的地址
//	//（int*)使此地址为整型指针，进行+-运算时步长为int
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2，5
//	return 0;
//}



struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//p为结构体指针
//p的值0x100000
//结构体大小20个字节
int main()
{
	printf("%p\n", p + 0x1);
	//0x00100014
	printf("%p\n", (unsigned long)p + 0x1);
	//0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);
	//0x100004
	return 0;
}