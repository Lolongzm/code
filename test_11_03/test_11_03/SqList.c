#define _CRT_SECURE_NO_WARNINGS 1
#include"SqList.h"

void InitList(struct SqList* P)
{
		memset(P->data, 0, sizeof(P->data));
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
		if (strcmp(arr, P->data[i])==0)
		{
			return i + 1;
		}
	}
	return 0;
}