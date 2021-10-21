#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为水仙花数(自幂数）
//		//1.判断i有几位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//			{
//				n++;
//			}
//		//2.计算出i的每位的n次方
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.判断i是否为水仙花数
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total: %d", total);
//	return 0;
//}
//
//move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right&&arr[left] % 2 == 1)//左边找偶数
//		{
//			left++;
//		}
//		while (left < right&&arr[right] % 2 == 0)//右边找奇数
//		{
//			right--;
//		}
//		if (left < right)//交换
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;//左边下一个数
//			right--;//右边下一个数
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1, 3, 7, 10, 6, 1, 3, 5, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i>=2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd';killer++)
//	if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
//	{
//		printf("killer:%c ", killer);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e' };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j <5-i-1 ; j++)
//		{
//			if (((arr[1] == 'b') + (arr[2] == 'a') == 1) && ((arr[1] == 'b') + (arr[3] == 'e') == 1) && ((arr[0] == 'c') + (arr[1] == 'd') == 1) && ((arr[4] == 'c') + (arr[2] == 'd') == 1) && ((arr[3] == 'e') + (arr[0] == 'a') == 1))
//			{
//				printf("%s")
//			}
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1 )
//						 if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
#include<string.h>
void left_move(char a[], int sz,int k)
{
	while (k)
	{
		int i = 0;
		int tmp = 0;
		tmp = a[i];
		for (i = 0; i < sz-2; i++)
		{
			a[i] = a[i + 1];
		}
		a[sz - 2] = tmp;
		k--;
	}

	
}

int main()
{
	char a[] = "ABCD";
	int sz = 0;
	int k = 0;
	sz = sizeof(a) / sizeof(a[0]);
	scanf("%d", &k);
	left_move(a, sz,k);
	printf("%s", a);
	return 0;
}




