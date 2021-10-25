#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu arr[50];//50个struct Stu类型的数据，可能多了也可能不够
//	return 0;
//}



//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候，应当归还
//	free(p);
//	p = NULL;//清空指针
//
//	return 0;
//}


//int main()
//{
//	            //malloc(10 * sizeof(int));//不初始化空间
//	int*p = (int*)calloc(10, sizeof(int));//会初始化空间为0
//		if (p == NULL)
//		{
//			//打印错误原因的一个方式
//			printf("%s\n", strerror(errno));
//		}
//		else
//		{
//			//正常使用空间
//			int i = 0;
//			for (i = 0; i < 10; i++)
//			{
//				printf("%d ", *(p + i));
//			}
//		}
//		free(p);
//		p = NULL;
//		return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(20);//开辟20个字节的空间
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//此时都在使用malloc开辟的20字节空间
//	//假设此时，20个字节不满足我们的使用
//	//我们需要能有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的空间
//	int*ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//释放内存
//		free(p);
//		p = NULL;
//	}
//
//	else
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i - 0; i < 10; i++)
//		{
//			*p++ = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000); 
//	}
//	return 0;
//}

//#include<stdlib.h>
//void Get
