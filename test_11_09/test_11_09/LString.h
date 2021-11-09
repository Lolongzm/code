#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define CHUNKSIZE 50  //块的大小可自定义

typedef struct Chunk
{
	char ch[CHUNKSIZE];
	struct Chunk* next;

}Chunk;

typedef struct
{
	Chunk * head;//串的头指针
	Chunk * tail;//串的尾指针
	int curlen;//串的当前长度
}LString; //字符串的块链结构










