#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;//得2余1
//	printf("a=%d\n", a);
//	double b = 5 / 2.0;
//	printf("b=%lf\n", b);//浮点数打印用lf；除浮点数得浮点数
//	return 0;
//}

//int main()
//{
//	//int a = 16;
//	//00000000000000000000000000010000
//	int a = -1;
//	//整数的二进制表示有原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001原码
//	//11111111111111111111111111111110符号位不变，其他位按位取反，即为反码；
//	//11111111111111111111111111111111反码+1即为补码，存储
//	int b = a >> 1;
//	//将补码右移，数字未变，补码-1为反码，按位取反为原码，均未变，即为-1；
//	printf("%d\n", b);//可见是算术移位
//}

//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	int b = a << 1;
//	//00000000000000000000000000001010
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;	//011
//	int b = 5;	//101
//	//int c = a & b;//001(按位与，全1则1，有0则0)
//	//int c = a | b;//111(按位或，有1则1，全0则0)
//	int c = a ^ b;//110(按位异或，相同则0，不同则1)
//	printf("%d\n", c);
//}

//int main()//可能溢出
//{
//	int a = 3;
//	int b = 5;
//	printf("前:a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("后:a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()//a与b异或得到c，则c与a异或又能得到b；
//{
//	int a = 3;
//	int b = 5;
//	printf("前:a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("后:a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()//统计数字的二进制中有几个“1”
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()//统计数字二进制补码中有多少个“1”
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	if (!a)
//		printf("haha\n");
//	return 0;
//}
