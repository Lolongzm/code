#define _CRT_SECURE_NO_WARNINGS 1

#include"SqStack.h"

void InitStack(SqStack S)
{
	S.base = (struct SElemType*)malloc(MAXSIZE*sizeof(struct SElemType));
	if (S.base == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	S.top = S.base;
	S.stacksize =MAXSIZE; 
}

int StackEmpty(SqStack S)
{
	if (S.base == S.top)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int StackLenght(SqStack S)
{
	return S.top - S.base;
}

void ClearStack(SqStack S)
{
	if (S.base)
	{
		S.top = S.base;
	}
}

void DestroyStack(SqStack S)//Ïú»Ù
{
	S.stacksize = 0;
	free(S.base);
	S.base = NULL;
	S.top = NULL;
}

void PushStack(SqStack S, struct SElemType e)
{
	if (S.top - S.base==S.stacksize)
	{
		return;
	}
	else
	{
		*S.top = e;
		S.top++;
	}
}

struct SElemType Pop(SqStack S)
{
	if (S.top - S.base == 0)
	{
		return;
	}
	else
	{
		return *--S.top;
	}
}
