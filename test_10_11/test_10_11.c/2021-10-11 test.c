#define _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//	int a = 11;//������λ��0���1
//	a=a | (1 << 2);
//	printf("%d", a);
//	//������λ��1���0
//	a = a&(~(1 << 2));
//	printf("%d", a);
//	return 0;
//}
//void test(char arr[])
//{
//	int a;
//	a = sizeof(arr);
//	printf("%d", a);
//}
//
//int main()
//{
//	int a;
//	char arr[] = { 0 };
//	a = sizeof(arr);
//	printf("%d\n", a);
//	test(arr);
//	return 0;
//}

//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;//�߼����������������Ϊ�٣����治����
//						//�߼����������������Ϊ�棬���治����
//	//i=a++||++b||d++;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}

////���ű��ʽ���ö��Ÿ����Ķ�����ʽ�����ű��ʽ�Ľ�������һ�����ʽ�Ľ��
//int main()
//
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);  //c==13
//	return 0;
//}

//int main()//�±����ò�����
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//
//	return 0;
//}


//int get_max(int a,int b)
//{
//	return a < b ? a : b;
//}
//int mian()
//{
//	int a = 0;
//	int b = 20;
//	int max = get_max(a, b);
//	return 0;
//}

////ѧ�� //�ṹ������---struct Stu
//struct Stu
//{
//
//	char name[20];
//	int age;
//	char id[10];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ�ýṹ��struct Stu������ʹ�����һ������s1�����ҳ�ʼ��
//	struct Stu s1 = { "����", 20, "20211011" };
//	
//	struct Stu* ps = &s1;
//
//	//������Ľṹ��.��Ա��
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//
//	//�ṹ��ָ��->��Ա��
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	//�ṹ�����.��Ա��
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//
//	//a+b ��ν���
//	//00000011����Ϊ
//	//00000000000000000000000000000011
//	//01111111����Ϊ
//	//00000000000000000000000001111111
//	//��ӽ��Ϊ
//    //00000000000000000000000010000010
//	char c = a + b;
//	//�ض�cΪ
//	//10000010
//	//��������Ϊ
//	//11111111111111111111111110000010 ����
//	//11111111111111111111111110000001 ����
//	//10000000000000000000000001111110 ԭ��
//	//-126
//	printf("%d\n", c);
//
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c)); //1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//1
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;//���ȼ�
//	int d = b + a + 3;//�����
//	return 0;
//}

int main()
{
	int c = 1;
	int d;
	d = c + --c;
	printf("%d", d);
	return 0;
}