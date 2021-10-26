#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//
//typedef struct st_type
//{
//	int i;  //柔性数组前必须是结构体不唯一且是最后一个成员
//	int arr[0];
//}type_a;
//
//int main()
//{
//	int i = 0;
//	type_a * p = (type_a *)malloc(sizeof(type_a)+10 * sizeof(int));//结构体内存空间开辟
//	//业务处理
//	p->i = 100;
//	for (i = 0; i < 10; i++)
//	{
//		p -> arr[i] = i;
//	}
//	free(p);//释放
//	p = NULL;
//
//	return 0;
//}

