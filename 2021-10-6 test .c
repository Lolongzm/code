#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
	/*int i = 0;
	while(i < 5)
	{
		test();
		i++;
	}*/

	//int a = 2;
	//int b = ++a;// ǰ��++ ����++����ʹ�ã�
	//printf("a=%d b=%d\n", a, b);
	//printf("%d\n\n\n", -2 >> 4);
	/*int b = ~a;*/
	//printf("%d\n",a>>(1p-n);
	//printf("%d",~(~0 << n));

	
	//{
	//	int a = 10;
	//	int b = 20;
	//	int add = Add(a, b);
	//	printf("a+b= %d\n", add);
	//	return 0;
	//}



	//double k = 3.14;
	//double* p = &k;
	//*p = 5.60;
	//printf("%lf\n", k);
	//printf("%lf\n", *p);
	//printf("%d\n", sizeof(double*); // 32-4 64-8
	//return 0;



	struct Book
	{
		char name[20];//c���Գ������ ����
		short price; // 56
	};


	int main()
	{
		//���ýṹ������-����һ�������͵Ľṹ�����
		struct Book b1 = { "c���Գ������",56 };
		struct Book* pb1 = &b1;
		//strcpy(b1.name, "C++"); // string copy �ַ������� ---�⺯��--string.h

		printf("����:%s\n",(*pb1).name);
		printf("�۸�:%d\n",(*pb1).price);//  . --------�ṹ�����.��Ա

		printf("������%s\n",pb1->name);
		printf("�۸�%d\n",pb1->price);//  ->  -------�ṹ��ָ��->��Ա
		return 0;

	}
