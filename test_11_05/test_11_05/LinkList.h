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
}Lnode,*LinkList;//Lnode*，常用来定义链表结点，LinkList为指向结构体Lnode的指针类型,常以此定义链表



Lnode* insertElem(LinkList L, int i, elemType elem);
Lnode* delElem(LinkList L, int i); //删除链表第i个elem
int selectElem(LinkList L, elemType elem);
Lnode* updateElem(LinkList L, int i,elemType elem);
Lnode* iteration_reverse(LinkList L);//迭代反转链表
Lnode* recursive_reverse(LinkList head);//递归反转链表
Lnode* head_reverse(LinkList L);//头插法反转链表
Lnode* local_reverse(LinkList L);