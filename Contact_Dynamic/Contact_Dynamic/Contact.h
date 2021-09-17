#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
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
	int capacity;//当前通讯录最大容量
	int size;//记录已有元素个数
	struct PeoInfo* data;//存放信息
};

void InitContact(struct Contact* ps);//声明函数,初始化
void AddContact(struct Contact* ps);//增加信息
void ShowContact(const struct Contact* ps);//打印信息
void DelContact(struct Contact* ps);//删除信息
void SearchContact(const struct Contact* ps);//查找信息
void ModifyContact(struct Contact* ps);//修改信息
void Sortcontact(struct Contact* ps);//排序
void DestoryContact(struct Contact* ps);