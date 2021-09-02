#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>



//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//		//比较两个字符串大小(比较的是对应的字符，a<s)，
//	//p1>p2则返回大于0的数字，等于则返回0，p1<p2返回小于0的数字
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
//	////没有内容补上0,补够6个
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
//	//追加结束后再加上'\0';
//	//内容不够时只追加所有的内容
//	printf("%s\n", arr1);
//	return 0;
//}