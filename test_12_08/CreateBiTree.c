#define _CRT_SECURE_NO_WARNINGS 1
#include"CreateBiTree.h"
enum Status CreateBiTree(BiTree T)
{
	char ch;
	scanf(&ch);
	if (ch == '#')
	{
		T = NULL;
	}
	else
	{
		if (!(T = (BiNode*)malloc(sizeof(BiNode))))
		{
			printf("%s\n", strerror(errno));
			return ERROR;
		}
		else
		{
			T->data = ch;
			CreateBiTree(T->lchild);
			CreateBiTree(T->rchild);
		}
	}
	return OK;
}

int Copy(BiTree T, BiTree newT)
{
	if (T == NULL)
	{
		newT = NULL;
		return 0;
	}
	else
	{
		newT->data = T->data;
		Copy(T->lchild, newT->lchild);
		Copy(T->rchild, newT->rchild);
	}
}

int Depth(BiTree T)
{
	if (T == NULL)return O;//如果是空树返回0
	else 
	{
		int m, n;
		m = Depth(T->lchild); 
		n = Depth(T->rchild);
		if (m>n) return (m + 1);
		else return(n + 1);
	}
}

int NodeCount(BiTree T)
{
	if (T == NULL)return 0;
	else
	{
		return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
	}
}

int LeadCount(BiTree T)
{
	if (T == NULL)return 0;
	if (T->lchild == NULL&&T->rchild == NULL)return 1;
	else
	{
		return LeadCount(T->lchild) + LeadCount(T->rchild);
	}
}
