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
}Lnode, *LinkList;//Lnode*，常用来定义链表结点，LinkList为指向结构体Lnode的指针类型,常以此定义链表

typedef enum bool
{
	False,
	Ture 
}bool;

//bool LinkIntersect(LinkList L1, LinkList L2);//判断链表是否相交
bool LinkIntersect(LinkList L1, LinkList L2);