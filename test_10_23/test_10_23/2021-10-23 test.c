#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}


//struct Stu
//{
//	char name[10];
//	int age;
//};

//int main()
//{
//	struct Stu s1[] = { { "张三", 20 }, { "李四", 18 } };
//	struct Stu s2[3] = { 0 };
//	memcpy(s2, s1, sizeof(s1));
//	return 0;
//}


////实现自己的memcpy函数
//#include<assert.h>
//void* my_memcpy(void* dest,const void* src, size_t num)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num)
//	{
//		*(char*)dest = *(char*)src;
//		++*(char*)dest;
//		++*(char*)src;
//		num--;
//	}
//	return start;
//}
//int main()
//{
//	struct Stu s1[] = { { "张三", 20 }, { "李四", 18 } };
//	struct Stu s2[10] = { 0 };
//	memcpy(s2, s1, sizeof(s1));
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//
//	memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////my_memmove函数实现
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* dest1 = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src||dest>(char*)src+count)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)(dest)+count) = *((char*)(src)+count);
//		}
//	}
//	return dest1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//
//	my_memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//memcmp函数
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret =  memcmp(arr1, arr2, 9);//比较字节的个数
//	printf("%d\n", ret);
//	return 0;
//}

//memset函数
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	return 0;
//}




//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性- 名字- 电话- 性别 -班级
//struct Stu
//{
//	char name[20];//结构体的成员变量
//	char tele[12];
//	int age;
//
//}s3,s4,s5;//全局变量
//
//struct Stu s2;//全局变量
//int main()
//{
//	//创建局部的结构体变量
//	struct Stu s1 = { "lee", "131456568989", 16 };
//	return 0;
//}


//struct
//{
//	char name[10];
//	int age;
//}* pa;
//struct
//{
//	char name[10];
//	int age;
//}a;
//int main()
//{
//	pa = &a;
//	return 0;
//}



//typedef struct nope
//{
//	int data;//4
//	struct Nope* next;//4/8
//}nope;
//

struct S1
{
	char c1;
	int a;
	char c2;
};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	char c1;
//	struct S2 s2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n ", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n ", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n ", sizeof(s3));
//	return 0;
//}

//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//3    如果默认对齐数是8 此处浪费7个字节
//	double d;//8
//};
//#pragma pack
////取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//void Init(const struct S* ps)
//{
//	ps->c = 'q';
//	ps->i = 456;
//	ps->d = 3.14;
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	return 0;
//}
