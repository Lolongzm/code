#define _CRT_SECURE_NO_WARNINGS 1
////结构体关键字    Stu - 结构体标签   
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; //类型
//int main()
//{
//	struct Stu s1; //创建一个局部的结构体变量
//	Stu s2 = {"张三",20,13145562902,"保密"};
//
//
//	return 0;
//}


#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[20];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 },arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}


//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n",ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四", 40, "15488889965", "男" };
//	print1(s);//需要将实参s进行拷贝，传入tmp，浪费空间
//	print2(&s);//节约内存
//	return 0;
//}



//调试实用技巧



//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//

//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("死循环 \n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//
//	//	ret = 1;
//
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//void my_strcpy(char* x, char* y)
//{
//	if (x != NULL &&y!= NULL)
//	{
//		while (*y != '\0')
//		{
//			*x = *y;
//			y++;
//			x++;
//			if (*x == '\0')
//			{
//				break;
//			}
//		}
//		*x = *y;//'\0'的拷贝
//
//	}
//
//}

//【优化代码】
#include<assert.h>

char* my_strcpy(char* x,const char* y)//const保护原数据
{
	char* ret = x;
	assert(x != NULL);//断言 如果为真什么都不发生，如果为假报错
	assert(y != NULL);
	//把y指向的字符串拷贝到x指向的空间，包含‘\0’
	
	while (*x++ = *y++)
		{
			;
		}
	return ret;
}

int main()
{
	char arr1[] = "AAAAAAAAAAA";
	char arr2[] = "123";
	my_strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1,arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//	//int * p = &num; //此时非法访问
//	//const int * p = &num;
//	//const 放在指针变量的*号左边时，修饰的是*p，也就是说不能通过p来修改*p（num）的值
//	//int *const p = &num;
//	//const 放在指针变量的*号右边时，修饰的是指针变量p本身，p不能被改变
//	
//	printf("%d", num);
//	return 0;
//}