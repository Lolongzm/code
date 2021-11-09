#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct Lnode
{
	int data;
	struct Lnode*next;
}Lnode,*LinkList;//Lnode*，常用来定义链表结点，LinkList为指向结构体Lnode的指针类型,常以此定义链表



void SrarusInitList_L(LinkList L);
void StatusDestroyList_L(LinkList L);//销毁单链表L
void StatusClearList(LinkList L);//清空链表L