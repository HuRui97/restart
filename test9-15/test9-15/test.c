#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	//�ֲ����飬����������
//	return p;
//}
////����ջ�ռ��ַ������
//
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//��Ȼָ��p����p�������ѱ�����
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	static int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}



//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//δ�ͷſռ䣬�����ڴ�й¶
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//�ͷ��˵�δ�ÿ�
//	if (str != NULL)
//		//str�Ѿ����ͷţ���ΪҰָ��
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}





