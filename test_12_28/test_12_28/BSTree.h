#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define InfoType int
#define KeyType int

typedef struct{
	KeyType key;
	InfoType otherInfo;
}ElemType;

typedef struct BSTNode
{
	ElemType data;
	struct BSTNode* lchild, *rchild;
}BSTNode,*BSTree;

BSTree SearchBST(BSTree T, KeyType key);