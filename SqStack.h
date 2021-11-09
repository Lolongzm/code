#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define MAXSIZE 100


typedef struct{
	struct SElemType *base; //栈底指针
	struct SElemType *top; //栈顶指针
	int stacksize; //栈可用最大容量
}SqStack; 

void InitStack(SqStack S);
int StackEmpty(SqStack S);
int StackLenght(SqStack S);
void ClearStack(SqStack S);
void DestroyStack(SqStack S);
void PushStack(SqStack S, struct SElemType e);
struct SElemType Pop(SqStack S);


