#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct Lnode
{
	int data;
	struct Lnode*next;
}Lnode,*LinkList;//Lnode*�����������������㣬LinkListΪָ��ṹ��Lnode��ָ������,���Դ˶�������



void SrarusInitList_L(LinkList L);
void StatusDestroyList_L(LinkList L);//���ٵ�����L
void StatusClearList(LinkList L);//�������L