#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int a[], int n, int i){
	printf("%d:", i);
	for (int j = 0; j<n; j++){
		printf("%d", a[j]);
	}
	printf("\n");
}

//直接插入排序函数
void InsertSort(int a[], int n)
{
	for (int i = 1; i<n; i++){
		if (a[i] < a[i - 1]){//若第 i 个元素大于 i-1 元素则直接插入；反之，需要找到适当的插入位置后在插入。
			int j = i - 1;
			int x = a[i];
			while (j>-1 && x < a[j]){  //采用顺序查找方式找到插入的位置，在查找的同时，将数组中的元素进行后移操作，给插入元素腾出空间
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = x;      //插入到正确位置
		}
		print(a, n, i);//打印每次排序后的结果
	}
}

//折半插入算法
void BInsertSort(int a[], int size){
	int i, j, low = 0, high = 0, mid;
	int temp = 0;
	for (i = 1; i<size; i++) {
		low = 0;
		high = i - 1;
		temp = a[i];
		//采用折半查找法判断插入位置，最终变量 low 表示插入位置
		while (low <= high) {
			mid = (low + high) / 2;
			if (a[mid]>temp) {
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		//有序表中插入位置后的元素统一后移
		for (j = i; j>low; j--) {
			a[j] = a[j - 1];
		}
		a[low] = temp;//插入元素
		print(a, 8, i);
	}

}


int main(){
	int a[8] = { 3, 1, 7, 5, 2, 4, 9, 6 };
	InsertSort(a, 8);
	printf("\n");
	BInsertSort(a, 8);
	return 0;
}