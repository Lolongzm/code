#include<stdio.h>

struct TElemType
{
	int a;//树的元素的任意数据类型
};

typedef struct BiNode
{
	struct TElemType data;
	struct BiNode * lchild;
	struct BiNode * rchild;
}BiNode, *BiTree;