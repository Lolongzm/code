#define _CRT_SECURE_NO_WARNINGS 1
#include"SqQueue.h"

void LevelOrder(BTNode *b) 
{
	BTNode *p; SqQueue *qu;
	InitQueue(qu);//��ʼ������
	enQueue(qu��b);//�����ָ��������
	while (!QueueEmpty(qu)) //�Ӳ�Ϊ�գ���ѭ��
	{
		deQueue(qu, p);//���ӽ��p
		printf("%c "��p->data);//���ʽ��p
		if (p->lchild != NULL) 
			enQueue(qu��p->lchild);
		         // ������ʱ�������
		if (p->rchild != NULL)
			enQueue(qu��p->rchild);
	}       	 //���Һ���ʱ�������
}


