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
}Lnode, *LinkList;//Lnode*�����������������㣬LinkListΪָ��ṹ��Lnode��ָ������,���Դ˶�������

typedef enum bool
{
	False,
	Ture 
}bool;

//bool LinkIntersect(LinkList L1, LinkList L2);//�ж������Ƿ��ཻ
bool LinkIntersect(LinkList L1, LinkList L2);