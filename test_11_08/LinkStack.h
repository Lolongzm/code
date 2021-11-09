#include<stdio.h>
#include<stdlib.h>
#include<errno.h>


struct SElemType
{
	int a;
};

typedef struct StackNode
{
	struct SElemType data;
	struct StackNode* next;
}StackNode,*LinkStack;

void InitStack(LinkStack S);
int StackEmpty(LinkStack S);
void InsertStack(LinkStack S, struct SElemType e);
void PopStack(LinkStack S, struct SElemType e);
struct SElemType GetTop(LinkStack S);