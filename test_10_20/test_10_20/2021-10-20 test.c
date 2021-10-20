#define _CRT_SECURE_NO_WARNINGS 1

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;//一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//}
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


////通用数组的冒泡排序算法
//struct Stu //定义结构体
//{
//	char name[20];
//	int age[10];
//};
//
//int cmp_int(const void* e1, const void* e2) //比较整型数据的函数
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_struct_by_name(const void* e1, const void* e2) //比较结构体中字符类型的函数
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void Swap(char*buf1, char*buf2, int width) //交换函数 - 利用width，挨个交换字节 完成通用交换数据
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2)) //冒泡排序
//{
//	int i = 0;//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;//一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)//判断两个地址对应数据的大小
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//交换这两个地址的数据
//			}
//		}
//
//	}
//}
//
//void test4() //整型数组的排序
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//利用整型排序函数规则
//}
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "wangwu", 10 }, { "lisi", 30 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_by_name);//利用结构体类型中成员类型的排序函数规则
//}
//int main() //主函数
//{
//	//test4();
//	test5();
//	return 0;
//}




