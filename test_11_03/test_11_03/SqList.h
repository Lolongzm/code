#include<stdio.h>
#include<stdlib.h>
#define MAX 50
#define OK 1
#define ERROR -1

typedef struct Book
{
	int number[10];
	char name[10];
	int price;
}type;
struct SqList
{
	type data[MAX];
	int length;
};

void InitList(struct SqList* P);
void DestroyList(struct SqList* P);
void ClearList(struct SqList* P);
int ListEmpty(struct SqList P);
int GetLength(struct SqList P);
int GetElem(struct SqList P,int i,type* e);
int Locate_by_name(struct SqList* P);
