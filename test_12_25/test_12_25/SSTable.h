#include<stdio.h>
#include<stdlib.h>
#define keyType int

typedef struct
{
	keyType key;//���ұ���ÿ������Ԫ�ص�ֵ
	//�����Ҫ�������������������
}ElemType;

typedef struct
{
	ElemType * elem;//��Ų��ұ�������Ԫ�ص�����
	int length;
}SSTable;

