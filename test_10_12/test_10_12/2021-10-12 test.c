#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int i = 0;
	int* arr[3] = { &a, &b, &c };
	for (i = 0; i < 2; i++)
	{
		printf("%d", *(arr[i]));
	}
	return 0;
}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//1.&arr-&数组名--数组名不是首元素的地址，数组名是代表整个数组--&数组名表示整个数组的地址
//	//2sizeof（arr）-sizeof(数组名）--数组名代表整个数组，求整个数组的大小
//	
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}

//
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen 
//	//递归 -- 模拟实现了strlen  计数器方式1，递归方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d ", &arr[9] - &arr[0]);//结果为两地址之间的元素个数
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = &arr[9];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 23; i++)
//	{
//		*(p++)=i;//当指针指向的范围超过数组arr的范围时，p就是野指针
//	}
//	return 0;
//}

//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int *p;//局部的指针变量，就被初始化随机值
//	*p = 20；//此时存放位置是一个随机位置
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名--首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pa = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//
//	return 0;
//}
