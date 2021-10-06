#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
	/*int i = 0;
	while(i < 5)
	{
		test();
		i++;
	}*/

	//int a = 2;
	//int b = ++a;// 前置++ （先++，再使用）
	//printf("a=%d b=%d\n", a, b);
	//printf("%d\n\n\n", -2 >> 4);
	/*int b = ~a;*/
	//printf("%d\n",a>>(1p-n);
	//printf("%d",~(~0 << n));

	
	//{
	//	int a = 10;
	//	int b = 20;
	//	int add = Add(a, b);
	//	printf("a+b= %d\n", add);
	//	return 0;
	//}



	//double k = 3.14;
	//double* p = &k;
	//*p = 5.60;
	//printf("%lf\n", k);
	//printf("%lf\n", *p);
	//printf("%d\n", sizeof(double*); // 32-4 64-8
	//return 0;



	struct Book
	{
		char name[20];//c语言程序设计 数组
		short price; // 56
	};


	int main()
	{
		//利用结构体类型-创建一个该类型的结构体变量
		struct Book b1 = { "c语言程序设计",56 };
		struct Book* pb1 = &b1;
		//strcpy(b1.name, "C++"); // string copy 字符串拷贝 ---库函数--string.h

		printf("书名:%s\n",(*pb1).name);
		printf("价格:%d\n",(*pb1).price);//  . --------结构体变量.成员

		printf("书名：%s\n",pb1->name);
		printf("价格：%d\n",pb1->price);//  ->  -------结构体指针->成员
		return 0;

	}
