#define _CRT_SECURE_NO_WARNINGS 1
#include"SqList.h"

void InitList(struct SqList* P)
{
		memset(P->data, 0, MAX*sizeof(P->data));
		P->length = 0;
}

void DestroyList(struct SqList* P)
{
	if (P != NULL)
	{
		free(P);
		P = NULL;
	}
}

void ClearList(struct SqList* P)
{
	P->length = 0;
}

int ListEmpty(struct SqList P)
{
	if (P.length == 0)
	{
		return 1;  //是空表
	}
	else
		return 0;  //不是空表
}

int GetLength(struct SqList P)
{
	return (P.length);
}

int GetElem(struct SqList P, int i, type* e)
{
	if (i<1 || i>P.length)
	{
		return ERROR;
	}
	else
	{
		*e =  P.data[i - 1];
		return OK;
	}
}

int Locate_by_name(struct SqList* P)
{
	char arr[10] = { 0 };
	printf("请输入要查找的图书名字>\n");
	scanf("%s", &arr);
	int i = 0;
	for (i = 0; i < P->length; i++)
	{
		if (strcmp(arr, P->data[i].name)==0)
		{
			return i + 1;
		}
	}
	return 0;
}
void Swap(void* dest, void* src)
{
	int num = sizeof(type);
	void* tmp = (void*)malloc(sizeof(type));
	while (num)
	{
		*(char*)tmp = *(char*)dest;
		++*(char*)tmp;
		++*(char*)dest;
		num--;
	}
	num = sizeof(type);
	while (num)
	{
		*(char*)dest = *(char*)src;
		++*(char*)dest;
		++*(char*)src;
		num--;
	}
	num = sizeof(type);
	while (num)
	{
		*(char*)src = *(char*)tmp;
		++*(char*)src;
		++*(char*)tmp;
		num--;
	}

}
void Insert(struct SqList P, int x,type e)
{
	if (x >= 1 && x <= MAX + 1)
	{
		if (P.length != MAX)
		{
			if (x == MAX + 1)
			{
				Swap(&(P.data[P.length]), &e);
			}
			else
			{
				int i = 0;
				for (i = P.length-1; i>=x-1; i--)
				{
					Swap(&(P.data[i]), &(P.data[i-1]));
				}
				Swap(&(P.data[x-1]), &e);
				P.length += 1;
			}
		}
		else{ printf("顺序表已经满了\n"); }
	}
	else{ printf("插入位置不合法\n"); }
}


void ListDelete(struct SqList* P, int x, type* e)
{

}



