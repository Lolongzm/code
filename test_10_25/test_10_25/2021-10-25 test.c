#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu arr[50];//50��struct Stu���͵����ݣ����ܶ���Ҳ���ܲ���
//	return 0;
//}



//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��Ӧ���黹
//	free(p);
//	p = NULL;//���ָ��
//
//	return 0;
//}


//int main()
//{
//	            //malloc(10 * sizeof(int));//����ʼ���ռ�
//	int*p = (int*)calloc(10, sizeof(int));//���ʼ���ռ�Ϊ0
//		if (p == NULL)
//		{
//			//��ӡ����ԭ���һ����ʽ
//			printf("%s\n", strerror(errno));
//		}
//		else
//		{
//			//����ʹ�ÿռ�
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
//	int* p = (int*)malloc(20);//����20���ֽڵĿռ�
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
//	//��ʱ����ʹ��malloc���ٵ�20�ֽڿռ�
//	//�����ʱ��20���ֽڲ��������ǵ�ʹ��
//	//������Ҫ����40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵĿռ�
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
//		//�ͷ��ڴ�
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
