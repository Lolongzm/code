#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	int num = 4;
//	{
//		if (5 == num)
//
//			printf("hehe");
//		else
//
//			printf("111");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	{
//		if (num = 5) // 此时num赋值为5，为真 
//
//			printf("hehe"); 
//		
//	}
//	return 0;
//}


//int jishu(int x)
//{
//	if (x % 2 !=1)	
//		printf("该数不是奇数\n");
//
//	else
//		printf("该数是奇数\n");
//	
//	return 0;
//}
//
//int main()
//{
//	printf("请输入一个数，判断是否为奇数 \n");
//	int a = 0;
//	scanf("%d", &a);
//	jishu(a);
//	return 0;
//
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch(day)
//	{
//		case 1:
//			printf("今天是星期一");
//			break;
//		case 2:
//			printf("今天是星期二");
//			break;
//		case 3:
//			printf("今天是星期三");
//			break;
//		case 4:
//			printf("今天是星期四");
//			break;
//		case 5:
//			printf("今天是星期五");
//			break;
//		case 6:
//			printf("今天是星期六");
//			break;
//		case 7:
//			printf("今天是星期天");
//			break;
//	}
//		return 0;
//

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		// i++;
//		if (i == 5)
//		
//
//			/*	continue;*/ // 0 1 2 3 4 .死循环
//			break; //0 1 2 3 4
//	
//		printf("%d\t", i);
//		i++;
//	}
//	return 0;
//} 

//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//			printf("%d\t", i);
//
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF end of file ---> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//
//	int ret = 0;
//	char password[20] = { 0 };
//
//	printf("请输入密码"); 
//	scanf("%s",password);
//	while ((ch = getchar()) != '\n')
//	{
//		//此时会直到清空至‘\n’为止
//	}
//	printf("请确认（y/n）");
//	ret = getchar(); //y/n
//	if (ret == 'y')
//		printf("确认成功");
//	else
//	printf("放弃确认 \n");
//
//	return 0;
//
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//	
//			continue;
//
//			putchar(ch);
//
//	}
//	return 0;
//}

//int i, j;
//for (i = 0; i < 4;i++)
//for (j = 0; j < 4; j++)
//	printf("我爱你 ");

//int main()
//{
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	while (i <= 10);
//	return 0;
//}


//如下代码 忽视每次都需要输入的scanf语句
//int ret(int x)
//{
//	int i;
//	int n;
//	int a = 1;
//	scanf("%d", &n);
//	 x = n;
//	for (i = 1; i < (x + 1); i++)
//	{
//		a = a * i;
//	}
//
//	return a;
//}
//int main()
//{
//	int i;
//	int b = 1;
//	for (i = 1; i<5; i++)
//	{
//		b = b + ret(i);
//
//	}
//
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int n;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//		
//	return 0;
//}
//



//int main()
//{
//	int a;
//	//int arr[] = { 1, 2, 3 };  // 1 2 3 
//	char arr[] = { "abc" }; // a b c \n
//	a = strlen(arr); //                   1   3
//	//a = sizeof(arr) / sizeof(arr[0]); //3   4
//	printf("%d", a);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < 7)
//		{
//			left = mid + 1;
//		}
//			
//		else if (arr[mid] > 7)
//		{
//			right = mid - 1;
//		}
//			
//		else
//		{
//			printf("找到了！下标为 %d\n",mid);
//			break;
//		}
//			
//	}
//	if (left>right)
//
//		printf("找不到了！\n");
//
//
//
//	return 0;
//}




//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = {"李雪纯才是纯欲天花板"};
//	char arr2[] = {"一一一一一一一一一一"};
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	
//	printf("李雪纯才是纯欲天花板");
//
//	return 0;
//}

int main()
{
	int i;
	char password[] = { "123456" };
	char a[20] = { 0 };
	
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码");
		scanf("%s", a);
		if (strcmp(a,password) == 0)
		{
			printf("输入正确");
			break;
		}
		else
			printf("输入错误\n");
	}
	if (i==4)
	printf("错误过多，退出程序");

	return 0;
}

