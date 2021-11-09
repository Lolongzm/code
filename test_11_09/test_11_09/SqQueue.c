#define _CRT_SECURE_NO_WARNINGS 1

#include"SqQueue.h"


void InitSqQueue(SqQueue Q)
{
	Q.base = (struct QElemType *)malloc(MAXQSIZE*sizeof(struct QElemType));
	if (Q.base == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	Q.front = 0;
	Q.rear = 0;
}

int SqQueueLenght(SqQueue Q)
{
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

void DeQueue(SqQueue Q, struct QElemType* e)
{
	if (Q.rear == Q.front)
	{
		return;
	}
	else
	{
		*e = Q.base[Q.front];
		Q.front = (Q.front + 1) % MAXQSIZE;
	}
}

void EnQueue(SqQueue Q, struct QElemType e)
{
	if ((Q.rear + 1) % MAXQSIZE == Q.front)
	{
		return;
	}
	else
	{
		Q.base[Q.rear] = e;
		Q.rear = (Q.rear + 1) % MAXQSIZE;
	}
}

struct QElemType GetHead(SqQueue Q)
{
	if (Q.front != Q.rear)
		return Q.base[Q.front];
}


