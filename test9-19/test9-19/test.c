#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pf);//写文件
//	fputc('i', pf);
//	fputc('t', pf);
//	int ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	//将pf文件读取一行至buf数组，最多读取1024个字节
//	//printf("%s\n", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s\n", buf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("hello\n", pf);
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main()
//{
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出流
//	gets(buf);
//	puts(buf);
//	return 0;
//}




//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//格式化形式输出至文件
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf,"%d %f %s", &s.n, &s.score, s.arr);
//	//格式化形式输入（从文件输入至s）
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};


//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//把格式化的数据输出为字符串存储至buf
//	//printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &tmp.n, &tmp.score, tmp.arr);
//	//从buf中读取格式化的数据到tmp
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}