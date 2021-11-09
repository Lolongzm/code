#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define MAXSIZE 100


typedef struct{
	struct SElemType *base; //ջ��ָ��
	struct SElemType *top; //ջ��ָ��
	int stacksize; //ջ�����������
}SqStack; 

void InitStack(SqStack S);
int StackEmpty(SqStack S);
int StackLenght(SqStack S);
void ClearStack(SqStack S);
void DestroyStack(SqStack S);
void PushStack(SqStack S, struct SElemType e);
struct SElemType Pop(SqStack S);


