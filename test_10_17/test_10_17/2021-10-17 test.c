#define _CRT_SECURE_NO_WARNINGS 1
////�ṹ��ؼ���    Stu - �ṹ���ǩ   
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; //����
//int main()
//{
//	struct Stu s1; //����һ���ֲ��Ľṹ�����
//	Stu s2 = {"����",20,13145562902,"����"};
//
//
//	return 0;
//}


#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[20];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 },arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}


//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n",ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 40, "15488889965", "��" };
//	print1(s);//��Ҫ��ʵ��s���п���������tmp���˷ѿռ�
//	print2(&s);//��Լ�ڴ�
//	return 0;
//}



//����ʵ�ü���



//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//

//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("��ѭ�� \n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//
//	//	ret = 1;
//
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//void my_strcpy(char* x, char* y)
//{
//	if (x != NULL &&y!= NULL)
//	{
//		while (*y != '\0')
//		{
//			*x = *y;
//			y++;
//			x++;
//			if (*x == '\0')
//			{
//				break;
//			}
//		}
//		*x = *y;//'\0'�Ŀ���
//
//	}
//
//}

//���Ż����롿
#include<assert.h>

char* my_strcpy(char* x,const char* y)//const����ԭ����
{
	char* ret = x;
	assert(x != NULL);//���� ���Ϊ��ʲô�������������Ϊ�ٱ���
	assert(y != NULL);
	//��yָ����ַ���������xָ��Ŀռ䣬������\0��
	
	while (*x++ = *y++)
		{
			;
		}
	return ret;
}

int main()
{
	char arr1[] = "AAAAAAAAAAA";
	char arr2[] = "123";
	my_strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1,arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//	//int * p = &num; //��ʱ�Ƿ�����
//	//const int * p = &num;
//	//const ����ָ�������*�����ʱ�����ε���*p��Ҳ����˵����ͨ��p���޸�*p��num����ֵ
//	//int *const p = &num;
//	//const ����ָ�������*���ұ�ʱ�����ε���ָ�����p����p���ܱ��ı�
//	
//	printf("%d", num);
//	return 0;
//}