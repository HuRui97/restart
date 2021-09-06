#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>


//int main()
//{
//	char arr[] = "574756230@qq.com";
//	const char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}




//int main()
//{
//	//错误码
//	//0-No error
//	//1-Operation not permitted
//	//2-No such file or directory
//	//
//	char* str = strerror(errno);
//	//把错误码转换成错误信息并返回地址
//	//errno是全局错误码的变量
//	//当C语言的库函数在执行中发生了错误，就会把对映的错误码赋值到errno中
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	int ret=islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}