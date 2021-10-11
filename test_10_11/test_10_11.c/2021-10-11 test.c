#define _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//	int a = 11;//将第三位的0变成1
//	a=a | (1 << 2);
//	printf("%d", a);
//	//将第三位的1变成0
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
//	i = a++&&++b&&d++;//逻辑与操作符，如果左边为假，后面不运算
//						//逻辑或操作符，如果左边为真，后面不运算
//	//i=a++||++b||d++;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}

////逗号表达式：用逗号隔开的多个表达式，逗号表达式的结果是最后一个表达式的结果
//int main()
//
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);  //c==13
//	return 0;
//}

//int main()//下标引用操作符
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

////学生 //结构体类型---struct Stu
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
//	//使用结构体struct Stu这个类型创建了一个对象s1，并且初始化
//	struct Stu s1 = { "张三", 20, "20211011" };
//	
//	struct Stu* ps = &s1;
//
//	//解引后的结构体.成员名
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	//结构体变量.成员名
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
//	//a+b 如何进行
//	//00000011提升为
//	//00000000000000000000000000000011
//	//01111111提升为
//	//00000000000000000000000001111111
//	//相加结果为
//    //00000000000000000000000010000010
//	char c = a + b;
//	//截断c为
//	//10000010
//	//整型提升为
//	//11111111111111111111111110000010 补码
//	//11111111111111111111111110000001 反码
//	//10000000000000000000000001111110 原码
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
//	int c = b + a * 3;//优先级
//	int d = b + a + 3;//结合性
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