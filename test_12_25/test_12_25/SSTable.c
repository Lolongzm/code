#define _CRT_SECURE_NO_WARNINGS 1
#include"SSTable.h"

Search_seq(SSTable *ST, keyType key)
{
	ST->elem[0].key = key;
	int i = ST->length;
	while (ST->elem[i].key != key)
	{
		i--;
	}
	return i;
}

//折半查找算法
int Search_Bin(SSTable *ST, keyType key){
	int low = 1;//初始状态 low 指针指向第一个关键字
	int high = ST->length;//high 指向最后一个关键字
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;//int 本身为整形，所以，mid 每次为取整的整数
		if (ST->elem[mid].key == key)//如果 mid 指向的同要查找的相等，返回 mid 所指向的位置
		{
			return mid;
		}
		else if (ST->elem[mid].key>key)//如果mid指向的关键字较大，则更新 high 指针的位置
		{
			high = mid - 1;
		}
		//反之，则更新 low 指针的位置
		else{
			low = mid + 1;
		}
	}
	return 0;
}

