#define _CRT_SECURE_NO_WARNINGS 1

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;//һ��ð������
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


////ͨ�������ð�������㷨
//struct Stu //����ṹ��
//{
//	char name[20];
//	int age[10];
//};
//
//int cmp_int(const void* e1, const void* e2) //�Ƚ��������ݵĺ���
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_struct_by_name(const void* e1, const void* e2) //�ȽϽṹ�����ַ����͵ĺ���
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void Swap(char*buf1, char*buf2, int width) //�������� - ����width�����������ֽ� ���ͨ�ý�������
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
//void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2)) //ð������
//{
//	int i = 0;//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;//һ��ð������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)//�ж�������ַ��Ӧ���ݵĴ�С
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//������������ַ������
//			}
//		}
//
//	}
//}
//
//void test4() //�������������
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//������������������
//}
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "wangwu", 10 }, { "lisi", 30 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_by_name);//���ýṹ�������г�Ա���͵�����������
//}
//int main() //������
//{
//	//test4();
//	test5();
//	return 0;
//}




