#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '*', 5);
//	printf("%s ", arr);
//	return 0;
//
//}
//
//int get_max(int x, int y)
//{
//	
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = get_max(a, b);
//	printf("最大值是：%d", max);
//	return 0;
//}

//互换数值
//
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//
//	printf("a=%d b=%d", a, b);
//	return 0;
//
//}
//
//利用函数打印100~200之间的素数
//int is_prime(int x)
//{
//	是素数返回1，不是返回0；
//	int j;
//	for (j = 2; j < x; j++)
//	{
//		if (x%j == 0)
//		{
//			return 0;
//		}
//	}
//			return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		printf("%d ",i);
//	}
//	return 0;
//}







//
//#include<string.h>
//int binary_search(int arr[], int k,int sz)
//{                //本质上arr是一个指针
//	//算法实现
//	//int sz = sizeof(arr)/sizeof(arr[0]);//在函数中，数组arr传进来的仅是一个元素的地址
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素下标
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] >k)
//			right = mid-1;
//		else
//			return mid;
//		
//	}
//	return -1;
//
//}
//
//int main()
//{
//
//	//二分查找
//	//在一个有序数组中查找具体某个数
//	//如果找到返回这个数的下标，找不到就返回-1 
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("找不到");
//	else
//		printf("找到了，下标为 %d ",ret);
//
//	return 0;
//}
//
//void add(int* px)
//{
//	
//	(*px)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);	
//	add(&num);
//	printf("num = %d\n", num);	
//	add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}



//int main(){
//	int len = 0;
//	//1
//	len = strlen("abc");  //strlen函数
//	printf("%d\n", len);// printf函数
//	//2	
//	printf("%d\n", strlen("abc");//printf函数（strlen函数）
//	return 0;
//
//}



//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 54)));//printf函数的返回值为打印字符的个数
//	return 0;
//}