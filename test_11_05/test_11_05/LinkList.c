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
			printf("����λ����Ч\n");
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
			printf("û�иý��\n");
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
	return -1;//û���ҵ�
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
			printf("�޸ĵĽ��Ƿ�\n");
			return L;
		}
	}
	memcpy(temp->data, &elem);
	return L;
}


Lnode* iteration_reverse(LinkList L)//������ת����
{
	//������ת����L Ϊ��ͷ�ڵ������ͷָ��
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
	//�ݹ�ĳ���
	if (head == NULL || head->next == NULL)     // ������ֻ��һ����㣬ֱ�ӷ���ͷָ��
	{
		return head;
	}

	else
	{
		//һֱ�ݹ飬�ҵ����������һ���ڵ�
		Lnode *new_head = recursive_reverse(head->next);

		//������˳�ʱ��new_head ��ָ�򶼲��䣬һֱָ��ԭ���������һ���ڵ㣻
		//�ݹ�ÿ�˳�һ�㣬������ head ָ���ָ�򶼻ᷢ���ı䣬��ָ����һ���ڵ㡣

		//ÿ�˳�һ�㣬����Ҫ�ı� head->next �ڵ�ָ�����ָ��ͬʱ�� head ��ָ�ڵ��ָ����Ϊ NULL��
		head->next->next = head;
		head->next = NULL;
		//ÿһ��ݹ��������Ҫ���µ�ͷָ�뷵�ظ���һ�㡣�ɴˣ����ɱ�֤�����ݹ�����У��ܹ�һֱ�ҵõ�������ı�ͷ��
		return new_head;
	}
}

Lnode* head_reverse(LinkList L)//ͷ�巨��ת����
{	
	//������ת����L Ϊ��ͷ�ڵ������ͷָ��
	LinkList newL = NULL;
	Lnode* temp = NULL;
	if (L == NULL || L->next == NULL)
	{
		return L;
	}
	while (1)
	{
			temp = L;
			//�� temp �� head ��ժ��
			L = L->next;

			//�� temp ���뵽 new_head ��ͷ��
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