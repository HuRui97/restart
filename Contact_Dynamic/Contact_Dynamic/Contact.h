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
//ö��Ҳ��

enum Option
{
	EXIT,//0,�˳�
	ADD,//1������
	DEL,//ɾ��
	SEARCH,//����
	MODIFY,//�޸�
	SHOW,//��ӡ
	SORT//����
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
	int capacity;//��ǰͨѶ¼�������
	int size;//��¼����Ԫ�ظ���
	struct PeoInfo* data;//�����Ϣ
};

void InitContact(struct Contact* ps);//��������,��ʼ��
void AddContact(struct Contact* ps);//������Ϣ
void ShowContact(const struct Contact* ps);//��ӡ��Ϣ
void DelContact(struct Contact* ps);//ɾ����Ϣ
void SearchContact(const struct Contact* ps);//������Ϣ
void ModifyContact(struct Contact* ps);//�޸���Ϣ
void Sortcontact(struct Contact* ps);//����
void DestoryContact(struct Contact* ps);