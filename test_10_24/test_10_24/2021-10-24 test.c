#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////λ�� - ������λ
////
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6�ֽ�*8 = 48bit
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 4;
//	char d : 5;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));//3���ֽ�
//	return 0;
//}

////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
//	//ö�ٳ���
//	MALE = 2,//���Գ�ʼ��ֵ
//	FEMALE,
//	SECRET = 8 
//};
//enum Color
//{
//	RED,
//	YELLOW = 9,
//	BLUE
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;//ֻ���ÿ���ȡֵ��ֵ
//	printf("%d %d %d\n", FEMALE, MALE,SECRET);
//	printf("%d %d %d\n", RED, YELLOW, c);
//	return 0;
//}


//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

union Un
{
	char arr[5];
	int i;
}u;
int main()
{

	printf("%d\n", sizeof(u));
	return 0;
}