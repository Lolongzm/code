#include<stdio.h>

struct TElemType
{
	int a;//����Ԫ�ص�������������
};

typedef struct BiNode
{
	struct TElemType data;
	struct BiNode * lchild;
	struct BiNode * rchild;
}BiNode, *BiTree;