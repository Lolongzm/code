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
	struct QElemType* base;//һά����base��ָ��
	int front; //ͷָ�� 
	int rear; //βָ��
}SqQueue;

void InitSqQueue(SqQueue Q);
int SqQueueLenght(SqQueue Q);
void DeQueue(SqQueue Q, struct QElemType* e);
void EnQueue(SqQueue Q, struct QElemType e);
struct QElemType GetHead(SqQueue Q);




