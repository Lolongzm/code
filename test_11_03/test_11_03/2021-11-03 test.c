#define _CRT_SECURE_NO_WARNINGS 1
#include"SqList.h"

int main()
{
	struct SqList L;
	
	InitList(&L);
	ClearList(&L);
	DestroyList(&L);

	int i = 0;
	type* e = (type*)malloc(sizeof(type));
	GetElem(L, i, &e);


	return 0;
}
