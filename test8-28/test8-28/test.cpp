#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);//二维数组后一个内存地址
//	int* ptr2 = (int*)(*(aa + 1));//第二行首元素的地址，*（aa+1）==aa[1]
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10,5
//	return 0;
//}


 
//int main()
//{
//	const char* a[] = { "work","at","alibaba" };//字符类型的指针数组
//	//数组内存放“w”，“a”，“a”的地址char*
//	const char** pa = a;//a为首元素w的地址的地址
//	//char**pa,pa是一个指针，指向的变量类型是char*,所以每次向后跳一个char*
//	pa++;//pa++ == a++，解引用指向“a”的地址
//	printf("%s\n", *pa);
//	return 0;
//}



int main()
{
	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
	//&E,&N,&P,&F
	const char** cp[] = { c + 3,c + 2,c + 1,c };
	//&&F,&&P,&&N,&&E
	const char*** cpp = cp;
	//指针指向char**cp,&&&F
	printf("%s\n", **++cpp);
	//point
	printf("%s\n", *-- * ++cpp + 3);
	//er
	printf("%s\n", *cpp[-2] + 3);
	//st
	printf("%s\n", cpp[-1][-1] + 1);
	//ew
	return 0;
}