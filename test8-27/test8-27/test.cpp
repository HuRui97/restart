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
//	int* ptr = (int*)(&a + 1);//�����һ���ڴ�ĵ�ַ
//	//��int*)ʹ�˵�ַΪ����ָ�룬����+-����ʱ����Ϊint
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2��5
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
//pΪ�ṹ��ָ��
//p��ֵ0x100000
//�ṹ���С20���ֽ�
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