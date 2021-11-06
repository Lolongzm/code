#define _CRT_SECURE_NO_WARNINGS 1
#include"DuLinkList.h"

DuLNode* GetElemP_Dul(DuLinkList L, int i)
{
	DuLNode* p = L;
	int j = 0;
	while (p)
	{
		p = p->next;
		j++;
		if (j == i)
		{
			return p;
		}
	}
	return p;
}

void ListInsert_DuL(DuLinkList L, int i, elemType e)//双向链表的插入操作
{
	DuLNode* p = GetElemP_Dul(L, i);
	if (!p)
	{
		printf("输入位置不合法\n");
		return;
	}
	else
	{
		DuLinkList s = (DuLinkList)malloc(sizeof(DuLNode));
		s->data = e;
		p->prior->next = s;
		s->prior = p->prior;
		s->next = p;
		p->prior = s;
	}
}

void ListDelete_Dul(DuLinkList L, int i, elemType e)
{
	DuLNode* p = GetElemP_Dul(L, i);
	if (!p)
	{
		printf("删除位置不合法\n");
		return;
	}
	else
	{
		e = p->data;
	}
}