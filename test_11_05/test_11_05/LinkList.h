#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct elemType
{
	char name[8];
	int age;
}elemType;

typedef struct Lnode
{
	elemType data[10];
	struct Lnode*next;
}Lnode,*LinkList;//Lnode*�����������������㣬LinkListΪָ��ṹ��Lnode��ָ������,���Դ˶�������



Lnode* insertElem(LinkList L, int i, elemType elem);
Lnode* delElem(LinkList L, int i); //ɾ�������i��elem
int selectElem(LinkList L, elemType elem);
Lnode* updateElem(LinkList L, int i,elemType elem);
Lnode* iteration_reverse(LinkList L);//������ת����
Lnode* recursive_reverse(LinkList head);//�ݹ鷴ת����
Lnode* head_reverse(LinkList L);//ͷ�巨��ת����
Lnode* local_reverse(LinkList L);