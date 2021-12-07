#include<stdio.h>
#define MaxSize 20

typedef int BTNode;
typedef struct{
	BTNode data[MaxSize];//存放队中元素
	int front;
	int rear; //队头和队尾指针
}SqQueue;//顺序循环队列类型
