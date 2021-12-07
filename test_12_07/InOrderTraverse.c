#define _CRT_SECURE_NO_WARNINGS 1
#include"InOrderTravverse.h"
#include"BinaryTree.h"
#include"SqStack.h"

enum Status InOrderTraverse(BiTree T)
{
	BiTree p; 
	InitStack(S);
	p = T;
	while (p || !StackEmpty(S))
	{
		if (p)
		{
			Push(S, p);
			p = p->lchild;
		}
		else
		{
			Pop(S, q);
			printf("%c", q->data);
			p = q->rchild;
		}
	}
}