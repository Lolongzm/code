#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char *p = "abcdef";//�����ַ���
//	//*p = 'w';  
//	printf("%c", *p);
//	printf("%s", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[] = "hello bit";
//	const char *p1 = "hello bit";
//	const char * p2 = "hello bit";
//	if (arr1 == arr2)
//	{
//		printf("arr1 arr2���\n");
//	}
//	else
//	{
//		printf("arr1 arr2�����\n");//��Ԫ�ص�ַ��ͬ���ʲ����
//	}
//	if (p1 == p2)
//	{
//		printf("p1 p2���\n");//�����ַ���Ϊ�˽�Լ�ڴ����ڴ��н�����һ��
//	}
//	else
//	{
//		printf("p1 p2�����\n");
//	}
//	return 0;
//}


//
//int main()
//{
//
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d",*(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int *p = NULL;//p������ָ�� -ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char * pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ���ָ��
//					//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arrΪ��Ԫ�ص�ַ
//	//&arr[0]��Ԫ�ص�ַ
//	//&arr -����ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr; //��������ַ��ָ��
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr; //��������ַ��ָ��
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	 i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//��Ϊ *pa == arr
//	}
//
//
//	return 0;
//
//}


//void print(int(*pa)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *((*pa + i) + j));
//			printf("%d ", (*(pa + i))[j]);
//			printf("%d ", *(pa[i]+j);	
//			printf("%d ", pa[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	print(arr, 3, 5);
//	return 0;
//}
//
////void test(int arr[3][5])
////{}
////void test(int arr[][5])
////{}
//void test(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello~");
//	return 0;
//}



////signal ��һ����������
////signal����������������һ��int��һ���Ǻ���ָ�루�ú���ָ��ָ��ĺ����Ĳ���Ϊint����������Ϊvoid��
////signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//void(*signal(int, void(*)(int))) (int);
//
////�򻯺�
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//
////�������Ĺ���
////typedef unsigned int uint






//char*my_strcpy(char* dest, char* str);
//char*(*pf)(char*, char*);
//char*(*pfArr[4])(char*, const char*);



//
////������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**********************\n");
//	printf("****1.add    2.sub****\n");
//	printf("****3.mul    4.div****\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("������>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//	//����ָ���������; -  ת�Ʊ�
//	do
//	{
//		menu();
//		printf("������>");
//		scanf("%d", &input);
//		if (input>=1&&input<=4)
//		{
//		printf("����������������");
//		scanf("%d%d", &x, &y);
//		int ret = pfArr[input](x,y);
//		printf("%d\n",ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	}
//	while (input);
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("������>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			printf("%d", Add(x, y));
//			break;
//		case 2:
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			printf("%d", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			printf("%d", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			printf("%d", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
 