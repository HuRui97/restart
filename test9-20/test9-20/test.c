#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf==NULL)
//	{
//		return;
//	}
//	int ch = fgetc(pf);
//	//���ļ�����ʾ-1
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	//printf("%s\n", strerror(errno));
//	//�Ѵ������Ӧ�Ĵ�����Ϣ�ַ�����ַ����
//
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		//hehe: No such file or directory
//		return 0 ;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		//hehe: No such file or directory
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



