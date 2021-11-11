#include<stdio.h>

struct TElemType
{
	int a;
};

typedef struct BiNode
{
	struct TElemType data;
	struct BiNode * lchild;
	struct BiNode * rchild;
}BiNode,*BiTree;






