#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	//初始化设置为0
	ps->size = 0;//通讯录最初0个元素
}


void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[ps->size].tel);
		printf("请输入住址\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tel,
				ps->data[i].addr);
		}
	}
}


static int FindByName(const struct Contact *ps,char name[MAX_NAME])//查找函数
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入要删除人的名字\n");
	scanf("%s", name);
	//查找要删除的位置
	int pos=FindByName(ps, name);//查找函数
//找到了返回下标，找不到返回-1
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else//删除
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}




void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入查找姓名\n");
	scanf("%s", name);
	int pos=FindByName(ps, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tel,
			ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入要修改联系人名字\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[pos].tel);
		printf("请输入住址\n");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}


void Sortcontact(struct Contact* ps)
{

}