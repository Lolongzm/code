#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
enum Status
{
	ERROR = -1,
	OK = 1,
};

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

typedef struct BiThrNode //线索二叉树的抽象数据类型构造
{
	int data;
	int ltag, rtag;
	struct BiThrNode* lchild, rchild;
}BiThrNode, *BiThrTree;

enum Status CreateBiTree(BiTree T);
int Copy(BiTree T, BiTree newT);//复制树
int Depth(BiTree T);//求树的深度
int NodeCount(BiTree T);//求树的结点数
int LeadCount(BiTree T);//求叶子结点数