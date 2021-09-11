#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	//��ʼ������Ϊ0
	ps->size = 0;//ͨѶ¼���0��Ԫ��
}


void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[ps->size].name);
		printf("����������\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰\n");
		scanf("%s", ps->data[ps->size].tel);
		printf("������סַ\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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


static int FindByName(const struct Contact *ps,char name[MAX_NAME])//���Һ���
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
	printf("����Ҫɾ���˵�����\n");
	scanf("%s", name);
	//����Ҫɾ����λ��
	int pos=FindByName(ps, name);//���Һ���
//�ҵ��˷����±꣬�Ҳ�������-1
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else//ɾ��
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}




void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("�����������\n");
	scanf("%s", name);
	int pos=FindByName(ps, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("����Ҫ�޸���ϵ������\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[pos].name);
		printf("����������\n");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰\n");
		scanf("%s", ps->data[pos].tel);
		printf("������סַ\n");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}


void Sortcontact(struct Contact* ps)
{

}