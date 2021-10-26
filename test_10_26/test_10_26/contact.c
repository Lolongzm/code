#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;//�Ҳ��������
}
void InfoContact(struct Contact* ps)
{
	ps->data = malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps -> data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2)  * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");

		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//���ͨѶ¼����
	//1.������ˣ����ӿռ�
	//2.���û����ʲôҲ����
	CheckCapacity(ps);
	//������ϵ������
		printf("����������->");
		scanf("%s", ps->data[ps->size].name);
		printf("����������->");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�->");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰->");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ->");
		scanf("%s", ps->data[ps->size].addr);

		(ps->size)++;
		printf("��ӳɹ�\n");

	//if (ps->size == MAX)
	//{
	//	printf("ͨѶ¼�������޷����\n");
	//}
	//else
	//{
	//	printf("����������->");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("����������->");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("�������Ա�->");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("������绰->");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("�������ַ->");
	//	scanf("%s", ps->data[ps->size].addr);

	//	(ps->size)++;
	//	printf("��ӳɹ�\n");
	//}
}
void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
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
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����","����","�Ա�","�绰","��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);

		}

	}


}

void DelContact(struct Contact* ps)
{
	printf("������ɾ���˵�����:>\n");
	char name[MAX_NAME];
	scanf("%s", &name);
	//1.����Ҫɾ�����˵�λ��
	int pos = FindByName(ps, name);
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}


void SearchContact(const struct Contact* ps)
{
	printf("����������˵�����:>\n");
	char name[MAX_NAME];
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}

}

void ModifyContact(struct Contact* ps)
{
	printf("������Ҫ�޸��˵�����:>");
	char name[MAX_NAME];
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("��Ҫ�޸ĵĵ��˲�����\n");
	}
	else
	{
		printf("����������->");
		scanf("%s", ps->data[pos].name);
		printf("����������->");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�->");
		scanf("%s", ps->data[pos].sex);
		printf("������绰->");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ->");
		scanf("%s", ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}


void Swap(char*buf1, char*buf2, int width) //�������� - ����width�����������ֽ� ���ͨ�ý�������
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void SortContact( struct Contact* ps)
{
	//int input;
	//printf("�����밴ʲô����������:>\n");
	//scanf("%d", &name);

	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
			{
				//struct PeoInfo tmp = { 0 };
				//tmp = *(ps->data[j]);
				//memcpy(ps->data[j], ps->data[j + 1],67 );
				//memcpy(ps->data[j], ps->data[j + 1],67 );

				Swap(ps->data[j + 1].name, ps->data[j].name, MAX_NAME);
				//Swap((char*)ps->data[j + 1].age, (char*)ps->data[j].age, 4);
				int tmp = 0;
				tmp = ps->data[j].age;
				ps->data[j].age = ps->data[j + 1].age;
				ps->data[j+1].age = tmp;
				Swap(ps->data[j + 1].sex, ps->data[j].sex, MAX_SEX);
				Swap(ps->data[j + 1].tele, ps->data[j].tele, MAX_TELE);
				Swap(ps->data[j + 1].addr, ps->data[j].addr, MAX_ADDR);

			}
		}
	}
	printf("�������\n");
}