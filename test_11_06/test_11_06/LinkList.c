#define _CRT_SECURE_NO_WARNINGS 1

#include"LinkList.h"

//bool LinkIntersect(LinkList L1, LinkList L2)//判断链表是否相交
//{
//	Lnode* p1 = L1;
//	Lnode* p2 = L2;
//
//	while (p1)
//	{
//		while (p2)
//		{
//			if (p1 == p2)
//			{
//				return Ture;
//			}
//			p2 = p2->next;
//		}
//		p1 = p1->next;
//		p2 = L2;
//	}
//	return False;
//}

bool LinkIntersect(LinkList L1, LinkList L2)
{
	Lnode* p1 = L1;
	Lnode* p2 = L2;
	while (p1->next)
	{
		p1 = p1->next;
	}
	while (p2->next)
	{
		p2 = p2->next;
	}
	if (p1 == p2)
	{
		return Ture;
	}
	else
	{
		return False;
	}
}