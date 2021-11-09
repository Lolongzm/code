#define _CRT_SECURE_NO_WARNINGS 1

#include"QueuePtr.h"


void InitQueue(LinkQueue Q)
{
	Q.front = (QueuePtr)malloc(sizeof(Qnode));
	Q.rear = (QueuePtr)malloc(sizeof(Qnode));
	if (Q.front == NULL&&Q.rear == 0)
		printf("%s\n", strerror(errno));
	else
	{
		Q.front->next = NULL;
	}
}

void DestroyQueue(LinkQueue Q)
{
	while (Q.front != NULL)
	{
		Qnode* p = Q.front->next;
		free(Q.front);
		Q.front = p;
	}
}

void EnQueue(LinkQueue Q, struct QElemType e)
{
	Qnode* p = (Qnode*)malloc(sizeof(Qnode));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		p->data = e;
		p->next = NULL;
		Q.rear->next = p;
		Q.rear = p;
	}
}

void DeQueue(LinkQueue Q, struct QElemType e)
{
	if (Q.rear == Q.front)
		return;
	else
	{
		Qnode* p = Q.front->next;
		e = p->data;
		Q.front->next = p->next;
		if (Q.rear == p) Q.rear = Q.front;
		free(p);
	}
}

void GetHead(LinkQueue Q, struct QElemType* e)
{
	if (Q.front == Q.rear)return;
	else
	{
		*e = Q.front->next->data;
		return;
	}
}



