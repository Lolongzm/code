#define _CRT_SECURE_NO_WARNINGS 1
#include"SqQueue.h"

void LevelOrder(BTNode *b) 
{
	BTNode *p; SqQueue *qu;
	InitQueue(qu);//初始化队列
	enQueue(qu，b);//根结点指针进入队列
	while (!QueueEmpty(qu)) //队不为空，则循环
	{
		deQueue(qu, p);//出队结点p
		printf("%c "，p->data);//访问结点p
		if (p->lchild != NULL) 
			enQueue(qu，p->lchild);
		         // 有左孩子时将其进队
		if (p->rchild != NULL)
			enQueue(qu，p->rchild);
	}       	 //有右孩子时将其进队
}


