#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;
//	int b = a + 1;
//	int b = ++a;
//	return 0;
//}

#include<stdio.h>

//#define MAX(X,Y)    ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//#define TEST(x,y) printf("test\n")
//
//int main()
//{
//	TEST();
//	TEST();
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int * p = (int*)malloc(10 * sizeof(int));
//	int * p = MALLOC(10, int);
//	return 0;
//}


#define MAX 100

int main()
{
	printf("MAX=%d\n", MAX);
#undef MAX
	printf("MAX=%d\n", MAX);
	return 0;
}