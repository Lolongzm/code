#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define CHUNKSIZE 50  //��Ĵ�С���Զ���

typedef struct Chunk
{
	char ch[CHUNKSIZE];
	struct Chunk* next;

}Chunk;

typedef struct
{
	Chunk * head;//����ͷָ��
	Chunk * tail;//����βָ��
	int curlen;//���ĵ�ǰ����
}LString; //�ַ����Ŀ����ṹ










