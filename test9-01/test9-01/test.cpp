#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

	//if (strlen("abc") - strlen("abcdef") > 0)
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");
	//}
	//strlen的返回值类型size_t==unsigned int 无符号


//int my_strlen( char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+ my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//    //int len = strlen("abcdef");//6
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);//随机值
//	printf("%d\n", len);
//
//	return 0;
//}


//void my_strcpy(char* dest,const  char* src)
//{
//	assert(dest);
//	assert(src);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1/*目的地*/, arr2/*源头地*/);
//	printf("%s\n", arr1);
//	return 0;
//}





//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



