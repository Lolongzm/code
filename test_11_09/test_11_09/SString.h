#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define MAXLEN 255

typedef struct
{
	char ch[MAXLEN + 1];
	int length;//串的当前长度
}SString;


int Index_BF(SString S, SString T, int pos);









