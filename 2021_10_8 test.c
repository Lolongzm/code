#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '*', 5);
//	printf("%s ", arr);
//	return 0;
//
//}
//
//int get_max(int x, int y)
//{
//	
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = get_max(a, b);
//	printf("���ֵ�ǣ�%d", max);
//	return 0;
//}

//������ֵ
//
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//
//	printf("a=%d b=%d", a, b);
//	return 0;
//
//}
//
//���ú�����ӡ100~200֮�������
//int is_prime(int x)
//{
//	����������1�����Ƿ���0��
//	int j;
//	for (j = 2; j < x; j++)
//	{
//		if (x%j == 0)
//		{
//			return 0;
//		}
//	}
//			return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		printf("%d ",i);
//	}
//	return 0;
//}







//
//#include<string.h>
//int binary_search(int arr[], int k,int sz)
//{                //������arr��һ��ָ��
//	//�㷨ʵ��
//	//int sz = sizeof(arr)/sizeof(arr[0]);//�ں����У�����arr�������Ľ���һ��Ԫ�صĵ�ַ
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] >k)
//			right = mid-1;
//		else
//			return mid;
//		
//	}
//	return -1;
//
//}
//
//int main()
//{
//
//	//���ֲ���
//	//��һ�����������в��Ҿ���ĳ����
//	//����ҵ�������������±꣬�Ҳ����ͷ���-1 
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("�Ҳ���");
//	else
//		printf("�ҵ��ˣ��±�Ϊ %d ",ret);
//
//	return 0;
//}
//
//void add(int* px)
//{
//	
//	(*px)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);	
//	add(&num);
//	printf("num = %d\n", num);	
//	add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}



//int main(){
//	int len = 0;
//	//1
//	len = strlen("abc");  //strlen����
//	printf("%d\n", len);// printf����
//	//2	
//	printf("%d\n", strlen("abc");//printf������strlen������
//	return 0;
//
//}



//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 54)));//printf�����ķ���ֵΪ��ӡ�ַ��ĸ���
//	return 0;
//}