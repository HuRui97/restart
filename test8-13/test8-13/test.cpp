#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu//创建结构体类型
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu si = { "张三",20,"20200813" };
//	//使用struct stu这个类型创建了一个学生对象si，并初始化
//	struct stu* ps = &si;
//
//	printf("%s\n", (*ps).name);
//
//	printf("%s\n", ps->name);//->结构体指针指向
//	//printf("%s\n", si.name);
//	//printf("%d\n", si.age);
//	//printf("%s\n", si.id);
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//char 截断时挑最小，最低位的8个字节 00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//a==00000011	整型提升（符号位是0，则往高位补0）00000000000000000000000000000011
//	//b==01111111	00000000000000000000000001111111
//	char c = a + b;
//	//c==00000000000000000000000010000010
//	//截断为10000010
//	printf("%d\n", c);
//	//打印整型，整型提升
//	//11111111111111111111111110000010  补码
//	//11111111111111111111111110000001  反码
//	//10000000000000000000000001111110  原码-》打印即为-126
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		//0x后跟16进制数字，b6转为二进制即为10110110
//		//首位为1，整型提升补1，于是与原数不相等
//		printf("a");
//	if (b == 0xb600)
//		//short类型同理
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = 3) * i++ + ++i;//问题表达式
//	printf("i=%d\n", i);
//	return 0;
//}

