#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);//��ά�����һ���ڴ��ַ
//	int* ptr2 = (int*)(*(aa + 1));//�ڶ�����Ԫ�صĵ�ַ��*��aa+1��==aa[1]
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10,5
//	return 0;
//}


 
//int main()
//{
//	const char* a[] = { "work","at","alibaba" };//�ַ����͵�ָ������
//	//�����ڴ�š�w������a������a���ĵ�ַchar*
//	const char** pa = a;//aΪ��Ԫ��w�ĵ�ַ�ĵ�ַ
//	//char**pa,pa��һ��ָ�룬ָ��ı���������char*,����ÿ�������һ��char*
//	pa++;//pa++ == a++��������ָ��a���ĵ�ַ
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
	//ָ��ָ��char**cp,&&&F
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