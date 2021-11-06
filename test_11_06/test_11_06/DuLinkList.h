#include<stdio.h>
#include<stdlib.h>

typedef struct elemType
{
	int age;
}elemType;

typedef struct DuLNode
{
	elemType data;
	struct DuLNode* prior;
	struct DuLNode* next;

}DuLNode,*DuLinkList;

DuLNode* GetElemP_Dul(DuLinkList L, int i);//获取第i个元素的指针
void ListInsert_DuL(DuLinkList L, int i, elemType e);
void ListDelete_Dul(DuLinkList L, int i, elemType e);