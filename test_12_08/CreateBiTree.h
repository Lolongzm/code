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
	int a;//����Ԫ�ص�������������
};

typedef struct BiNode
{
	struct TElemType data;
	struct BiNode * lchild;
	struct BiNode * rchild;
}BiNode, *BiTree;

typedef struct BiThrNode //�����������ĳ����������͹���
{
	int data;
	int ltag, rtag;
	struct BiThrNode* lchild, rchild;
}BiThrNode, *BiThrTree;

enum Status CreateBiTree(BiTree T);
int Copy(BiTree T, BiTree newT);//������
int Depth(BiTree T);//���������
int NodeCount(BiTree T);//�����Ľ����
int LeadCount(BiTree T);//��Ҷ�ӽ����