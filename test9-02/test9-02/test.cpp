#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>



//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//		//�Ƚ������ַ�����С(�Ƚϵ��Ƕ�Ӧ���ַ���a<s)��
//	//p1>p2�򷵻ش���0�����֣������򷵻�0��p1<p2����С��0������
//	printf("%d\n", ret);
//	
//	return 0;
//}

//int main()
//{
//	const char* p1 = "qbc";
//	const char* p2 = "abc";
//	if (strcmp(p1, p2) >0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if(strcmp(p1, p2)<0)
//		printf("p1<p2\n");
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//void my_strncpy(char arr1[], char arr2[], int n)
//{
//
//}
//
//int main()
//{
//	char arr1[10] = "abcefgh";
//	char arr2[] = "bit";
//
//	//strncpy(arr1, arr2, 6);
//	////û�����ݲ���0,����6��
//	my_strncpy(arr1, arr2, 6);
//
//	printf("%s\n", arr1);
//	return 0;
//}




//int main()
//{
//	char arr1[30] = "hello\0xxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	//׷�ӽ������ټ���'\0';
//	//���ݲ���ʱֻ׷�����е�����
//	printf("%s\n", arr1);
//	return 0;
//}