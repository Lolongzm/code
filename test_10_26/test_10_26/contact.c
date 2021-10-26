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
	return -1;//找不到的情况
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
			printf("增容成功\n");

		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检测通讯录容量
	//1.如果满了，增加空间
	//2.如果没满，什么也不干
	CheckCapacity(ps);
	//增加联系人数据
		printf("请输入名字->");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄->");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别->");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话->");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址->");
		scanf("%s", ps->data[ps->size].addr);

		(ps->size)++;
		printf("添加成功\n");

	//if (ps->size == MAX)
	//{
	//	printf("通讯录已满，无法添加\n");
	//}
	//else
	//{
	//	printf("请输入名字->");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("请输入年龄->");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("请输入性别->");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话->");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("请输入地址->");
	//	scanf("%s", ps->data[ps->size].addr);

	//	(ps->size)++;
	//	printf("添加成功\n");
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
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字","年龄","性别","电话","地址");
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
	printf("请输入删除人的名字:>\n");
	char name[MAX_NAME];
	scanf("%s", &name);
	//1.查找要删除的人的位置
	int pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}


void SearchContact(const struct Contact* ps)
{
	printf("请输入查找人的名字:>\n");
	char name[MAX_NAME];
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改人的名字:>");
	char name[MAX_NAME];
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("需要修改的的人不存在\n");
	}
	else
	{
		printf("请输入名字->");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄->");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别->");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话->");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址->");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");
	}
}


void Swap(char*buf1, char*buf2, int width) //交换函数 - 利用width，挨个交换字节 完成通用交换数据
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
	//printf("请输入按什么类别进行排序:>\n");
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
	printf("排序完成\n");
}