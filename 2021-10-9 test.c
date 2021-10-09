#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//
//	printf("哈哈");
//	main();  
//	return 0;
//}

//void print(int x)
//{
//	int y, z;
//	while (x > 9)
//	{
//		y = x % 10;
//		z = (x - y) / 10;
//		x = z;
//		printf("%d", y);
//	}
//	printf("%d", x);
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//void print(int x)
//{
//
//	if (x>9)
//		print(x / 10);
//
//	printf("%d", x % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//
//int my_strlen (char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//
//	return count;
//}
//



//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//




//int main()
//{
//
//	//int len = strlen(arr);
//	//printf("%d", len);
//
//	//模拟一个strlen函数：
//	char arr[] = "abc";
//	int len = my_strlen(arr);//arr是数组，每次传输第一个元素的地址
//	printf("%d", len);
//	return 0;
//}


//int fac1(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret = ret*i;
//	}
//
//	return ret;
//}
//
//int fac2(int x)
//{
//	if (x<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*fac2(x - 1);
//	}
//}
//   
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//求第n个斐波拉契数,不考虑溢出。
//
//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}








//
//
//
//
//int main()
//{
//	char arr[] = "abcd";
//	printf("%d\n", sizeof(arr));  //sizeof计算arr所占空间的大小
//
//	printf("%d\n", strlen(arr)); // 求字符串长度，\0前的字符个数
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//return 0;
//}


//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
///*
//&arr[0] = 010FF8E4
//&arr[1] = 010FF8E8
//&arr[2] = 010FF8EC
//&arr[3] = 010FF8F0
//&arr[4] = 010FF8F4
//&arr[5] = 010FF8F8
//&arr[6] = 010FF8FC
//&arr[7] = 010FF900
//&arr[8] = 010FF904
//&arr[9] = 010FF908
//*/


//int main()
//{
//	int arr[4][3] = { 1, 3, 4, 7, 8, 9, 2 };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		int j;
//		for (j = 0; j < 3; j++)
//		{
//			printf("&arr[%d][%d]= %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


////冒泡排序
//
//void bubble_sort(int arr[],int sz)
//{
//	int i, j,ret;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1; //假设要排序的数据已经有序
//
//		//每一趟冒泡排序
//		for (j = 0; j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//				flag = 0;//本趟排序数据不完全有序
//			}
//		}
//
//
//		if (flag == 1)
//			printf("不需要排序");
//			break;
//		
//	}
//}
//int main()
//{
//	int i;
//	int arr[] = { 1,3,2,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr[] = { 1, 3, 2, 4, 5 };
	printf("%p\n", arr);//数组首元素地址
	printf("%p\n", &arr[0]);//数组首元素地址
	printf("%p\n", &arr); //数组的地址--从首元素地址开始
	printf("==================\n");
	printf("%p\n", arr);//数组首元素地址
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);//数组首元素地址
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr); //数组的地址--从首元素地址开始
	printf("%p\n", &arr+1);
	return 0;
}
