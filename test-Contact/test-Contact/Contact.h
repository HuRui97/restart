#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30
//枚举也可

enum Option
{
	EXIT,//0,退出
	ADD,//1，增加
	DEL,//删除
	SEARCH,//查找
	MODIFY,//修改
	SHOW,//打印
	SORT//排序
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[MAX];//存放1000个信息
	int size;//记录已有元素个数
};

void InitContact(struct Contact* ps);//声明函数,初始化
void AddContact(struct Contact* ps);//增加信息
void ShowContact(const struct Contact* ps);//打印信息
void DelContact(struct Contact* ps);//删除信息
void SearchContact(const struct Contact* ps);//查找信息
void ModifyContact(struct Contact* ps);//修改信息
void Sortcontact(struct Contact* ps);//排序