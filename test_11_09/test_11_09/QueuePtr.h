#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define MAXQSIZE 100

struct QElemType
{
	int age;
};

typedef struct Qnode
{
	struct QElemType data;
	struct Qnode* next;

}Qnode,*QueuePtr;

typedef struct
{
	QueuePtr front;//��ͷָ��
	QueuePtr rear;//��βָ��
}LinkQueue;

void InitQueue(LinkQueue Q);
void DestroyQueue(LinkQueue Q);
void EnQueue(LinkQueue Q, struct QElemType e);
void DeQueue(LinkQueue Q, struct QElemType e);
void GetHead(LinkQueue Q, struct QElemType* e);

