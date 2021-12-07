#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"
#include"PreOrderTraverse.h"


enum Status PreOrderTraverse(BiTree T)
{
	if (T == NULL)
		return OK;
	else
	{
		visit(T);//访问根节点
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}