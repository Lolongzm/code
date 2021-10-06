#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//standard标准 input ouput 
//#include <string.h>
//#include<limits.h>

//int add （int x, int y）; //函数
//{
//	int z = x + y;
//	return z;
//}
int main()  //主函数（fn+f10运行）为程序的有且仅有一个的入口
{               //main前面的int表示main函数的调用返回一个int整型值
	//printf("Hello World!\n");  //print 打印 //function函数


	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b', 'c' };
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	////string length


	//printf("(are u ok??)\n");	
	//printf("%d\n",strlen("c:\test\32\test.c"));



	//int input;
	//printf("你想成为超级英雄吗");
	//printf("如果想,请回答（是1/否0)>:");
	//scanf("%d", &input);
	//if (input == 1)
	//{
	//	printf("你成为了钢铁侠\n");
	//}
	//else{
	//	printf("你成为了番薯\n");
	//}

	//int arr[5] = { 1, 2, 3, 4, 5 };
	//int i = 0;
	//while(i<5)
	//{
	//	printf("%d", arr[i]);
	//	i++;
	//}


	//int a = 3;
	//int b = 5;

	//printf("交换前：a=%d,b=%d\n", a, b);
	//a = a + b;int 4 字节，相加可能出现溢出问题
	//b = a - b;
	//a = a - b;



	//printf("交换前：a=%d,b=%d\n", a, b);    int 4 字节，相加可能出现溢出问题
	//int a = 3;
	//int b = 5;

	//printf("交换前：a=%d,b=%d\n", a, b);

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;

	//printf("交换前：a=%d,b=%d\n", a, b);



	/*int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };

	int i = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
	int j = 0;
	int count = 0;
	for (j = 0; j < sz; j++)
	{
	if (arr[i] == arr[j])
	{
	count++;
	}
	}
	if (count == 1)
	{
	printf("只出现一次的数字是 %d\n", arr[i]);

	}
	}
	*/


	//int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };

	//int i = 0;
	//int ret = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	ret = ret^arr[i];
	//	
	//}
	//printf("只出现一次的数字是 %d\n", ret);



	/*char input[20] = { 0 };
	again:

	system("shutdown -s -t 60");
	printf("一分钟内输入我是猪，不然关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}*/
//
//​	int a = 10;
//
//	int b = a++;// 后置++ （先使用，再++）
//	printf("a=%d b=%d", a, b);
//​int a = 10;
//int b = ++a;// 前置++ （先++，再使用）
//printf("a=%d b=%d", a, b);

	return 0;
}