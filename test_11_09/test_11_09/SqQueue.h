#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define MAXQSIZE 100

struct QElemType
{
	int age;
};

typedef struct SqQueue
{
	struct QElemType* base;//一维数组base的指针
	int front; //头指针 
	int rear; //尾指针
}SqQueue;

void InitSqQueue(SqQueue Q);
int SqQueueLenght(SqQueue Q);
void DeQueue(SqQueue Q, struct QElemType* e);
void EnQueue(SqQueue Q, struct QElemType e);
struct QElemType GetHead(SqQueue Q);




