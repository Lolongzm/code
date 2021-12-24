#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d time:%s data:%s i=%d\n",
//			__FILE__, __LINE__, __TIME__, __DATE__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#define MAX 100
//#define reg register
//int mian()
//{
//	int max = MAX;
//	printf("%d\n", max);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5+1);
//	printf("%d\n", ret);
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBlE(a);
//	return 0;
//}

//
//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of" "a" "is %d\n", a);
//
//	PRINT(b);
//	//printf("the value of" "b" "is %d\n", b);
//
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	
//	int Class84 = 2019;
//	int Class85 = 2020;
//	while (1)
//	{
//		int i = 84;
//		printf("%d\n", CAT(Class, i));
//		i++;
//		//printf("%d\n", Class##84);
//	}
//
//	return 0;
//}


//
//struct str{
//	int len;
//	char s[0];
//};
//
//struct foo {
//	struct str *a;
//};
//
//int main(int argc, char** argv) {
//	struct foo f = { 0 };
//	printf("%x\n", f.a->s);
//	//if (f.a->s) {
//	//	printf(f.a->s);
//	//}
//	return 0;
//}

struct test{
	int i;
	short c;
	char *p;
	char s[10];
};

int main(){
	struct test *pt = NULL;
	printf("&s = %x\n", pt->s); //等价于 printf("%x\n", &(pt->s) );
	printf("&i = %x\n", &pt->i); //因为操作符优先级，我没有写成&(pt->i)
	printf("&c = %x\n", &pt->c);
	printf("&p = %x\n", &pt->p);
	return 0;
}