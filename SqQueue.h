#include<stdio.h>
#define MaxSize 20

typedef int BTNode;
typedef struct{
	BTNode data[MaxSize];//��Ŷ���Ԫ��
	int front;
	int rear; //��ͷ�Ͷ�βָ��
}SqQueue;//˳��ѭ����������
