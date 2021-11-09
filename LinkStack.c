#define _CRT_SECURE_NO_WARNINGS 1

#include"LinkStack.h"

void InitStack(LinkStack S)
{
	S = NULL;
}

int StackEmpty(LinkStack S)
{
	if (!S)
		return 1;
	else
		return 0;
}

void InsertStack(LinkStack S, struct SElemType e)
{
	StackNode * p = (StackNode*)malloc(sizeof(StackNode));
	p->data = e;
	p->next = S;
	S = p;
}

void PopStack(LinkStack S, struct SElemType e)
{
	if (S == NULL)return;
	e = S->data;
	StackNode * p = S;
	S = S->next;
	free(p);
}

struct SElemType GetTop(LinkStack S)
{
	if (S!=NULL)
	return S->data;
}