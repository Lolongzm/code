#include<stdio.h>
#include<stdlib.h>
#define keyType int

typedef struct
{
	keyType key;//查找表中每个数据元素的值
	//如果需要，还可以添加其他属性
}ElemType;

typedef struct
{
	ElemType * elem;//存放查找表中数据元素的数组
	int length;
}SSTable;

