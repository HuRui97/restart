#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>



//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//	//pָ����Ѳ���ԭ����λ��
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	//free(p);
//	//��ͬһ�鶯̬���ٵ��ڴ����ͷ�
//	//����ǿ�ָ���򲻽��в���
//
//
//
//
//	//�Զ�̬�����ڴ������ͷţ��ڴ�й¶��
//	while (1)
//	{
//		//malloc(1);
//		//Sleep(1000);
//
//	}
//	return 0;
//
//}




//void GetMemory(char* p)
////������ʱ����p������str��ֵ��ָ��NULL����ֵ���ã�
//{
//	p = (char*)malloc(100);
//	//pΪ�βΣ�ֻ�ں����ڲ���Ч����������֮��̬�����ڴ�δ�ͷ����޷��ҵ�
//	//����ڴ�й¶
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//����strָ���ֵ
//	//�������ú�str����NULL
//	strcpy(str, "hello world");
//	//��NULL�����ã��������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



void GetMemory(char** p)
{
	*p = (char*)malloc(100);

}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	if (str == NULL)
	{
		return 0;
	}
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}