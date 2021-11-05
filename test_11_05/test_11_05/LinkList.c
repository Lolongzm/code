#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


Lnode* insertElem(LinkList L, int i, elemType elem)
{
	Lnode* p = L;
	int j = 0;
	for (j = 1; j < i - 1; j++)
	{
		p = p->next;
		if (p->next == NULL)
		{
			printf("插入位置无效\n");
			return L;
		}
	}

	Lnode *  temp = (Lnode *)malloc(sizeof(Lnode));
	memcpy(temp, &elem);

	temp->next = p->next;
	p->next = temp;

	return L;
}

Lnode* delElem(LinkList L, int i)
{
	Lnode* temp = L;
	j = 0;
	for (j = 1; j < i - 1; j++)
	{
		temp = temp->next;
		if (temp->next == NULL)
		{
			printf("没有该结点\n");
			return L;
		}
	}
	Lnode* del = temp->next;
	temp->next = temp->next->next;

	free(del);

	return L;
}


int selectElem(LinkList L, elemType elem)
{
	Lnode* temp = L;
	int j = 0;
	while (temp)
	{
		j++;
		temp = temp->next;
		if (memcmp(temp->data, elem) == 0)
		{
			return j;
		}
	}
	return -1;//没有找到
}

Lnode* updateElem(LinkList L, int i, elemType elem)
{
	Lnode* temp = L;
	j = 0;
	for (j = 0; j < i; j++)
	{
		temp = temp->next;
		if (temp->next == NULL)
		{
			printf("修改的结点非法\n");
			return L;
		}
	}
	memcpy(temp->data, &elem);
	return L;
}


Lnode* iteration_reverse(LinkList L)//迭代反转链表
{
	//迭代反转法，L 为无头节点链表的头指针
	if (L == NULL || L->next == NULL)
	{
		return L;
	}
	else
	{
		Lnode* beg = NULL;
		Lnode* mid;
		Lnode* end;
		mid = L;
		end = mid->next;
		while (1)
		{
			mid->next = beg;
			if (end == NULL)
			{
				break;
			}
			beg = mid;
			mid = end;
			end = end->next;

		}
		L = mid;
		return L;
	}
	
}


Lnode* recursive_reverse(LinkList head)
{
	//递归的出口
	if (head == NULL || head->next == NULL)     // 空链或只有一个结点，直接返回头指针
	{
		return head;
	}

	else
	{
		//一直递归，找到链表中最后一个节点
		Lnode *new_head = recursive_reverse(head->next);

		//当逐层退出时，new_head 的指向都不变，一直指向原链表中最后一个节点；
		//递归每退出一层，函数中 head 指针的指向都会发生改变，都指向上一个节点。

		//每退出一层，都需要改变 head->next 节点指针域的指向，同时令 head 所指节点的指针域为 NULL。
		head->next->next = head;
		head->next = NULL;
		//每一层递归结束，都要将新的头指针返回给上一层。由此，即可保证整个递归过程中，能够一直找得到新链表的表头。
		return new_head;
	}
}

Lnode* head_reverse(LinkList L)//头插法反转链表
{	
	//迭代反转法，L 为无头节点链表的头指针
	LinkList newL = NULL;
	Lnode* temp = NULL;
	if (L == NULL || L->next == NULL)
	{
		return L;
	}
	while (1)
	{
			temp = L;
			//将 temp 从 head 中摘除
			L = L->next;

			//将 temp 插入到 new_head 的头部
			temp->next = newL;
			newL = temp;
	}
	return newL;
}

Lnode* local_reverse(LinkList L)
{
	Lnode* beg = L;
	Lnode* end = beg->next;
	if (L == NULL || L->next == NULL)
	{
		return L;
	}
	while (end != NULL)
	{
		beg->next = end->next;
		end->next = L;
		L = end;
		end = beg->next;
	}
	return L;
}