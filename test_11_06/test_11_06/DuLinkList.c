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

void ListInsert_DuL(DuLinkList L, int i, elemType e)//˫������Ĳ������
{
	DuLNode* p = GetElemP_Dul(L, i);
	if (!p)
	{
		printf("����λ�ò��Ϸ�\n");
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
		printf("ɾ��λ�ò��Ϸ�\n");
		return;
	}
	else
	{
		e = p->data;
	}
}