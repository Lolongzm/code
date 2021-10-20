#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a+1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int num;
//	char *pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;
////假设p的值为0x100000，如下表达式分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p= (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//注意此处为圆括号{1，3，5}
//	int *p;
//	p = a[0];
//	printf("%d", p[0]); 
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a; //p地址:int (*)[4] a为首元素地址：int(*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}10 128

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };//三个char*元素组成的数组
//	char**pa = a;
//
//	pa++;//+1 跳过一个char*的宽度
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;

	printf("%s\n",**++cpp );
	printf("%s\n", *--*++cpp + 3);	
	printf("%s\n", *cpp[-2] +3);
	printf("%s\n", cpp[-1][-1]+1);
	return 0;
}