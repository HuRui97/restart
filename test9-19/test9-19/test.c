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
//	fputc('b', pf);//д�ļ�
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
//	//��pf�ļ���ȡһ����buf���飬����ȡ1024���ֽ�
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
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼�����
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
//	//��ʽ����ʽ������ļ�
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
//	//��ʽ����ʽ���루���ļ�������s��
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
//	//�Ѹ�ʽ�����������Ϊ�ַ����洢��buf
//	//printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &tmp.n, &tmp.score, tmp.arr);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}