#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef int ElemType;

typedef struct Stack
{
	ElemType data[MAXSIZE];
	int base;    //栈底
	int top;       //栈顶
	int length;    //栈的大小
}SqStack, *pStack;
void InitStack(pStack stack);
int Push(pStack stack, int num);
int Pop(pStack stack, int num);
void StackEmpty(pStack stack);