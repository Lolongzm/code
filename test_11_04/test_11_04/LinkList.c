#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"

void SrarusInitList_L(LinkList L)
{
	L = (LinkList)malloc(sizeof(Lnode));
	L->next = NULL;
	printf("初始化完成\n");
}


void StatusDestroyList_L(LinkList L)
{
	Lnode* p;
	while (L)
	{
		p = L;
		L = L->next;
		free(p);
	}
}

void StatusClearList(LinkList L)
{
	Lnode* p=(LinkList)malloc(sizeof(Lnode));
	Lnode* d = (LinkList)malloc(sizeof(Lnode));
	p = L->next;
	while (d)
	{
		d = p->next;
		free(p);
		p = d;
	}
	L->next = NULL;
}