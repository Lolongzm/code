#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int a[], int n, int i){
	printf("%d:", i);
	for (int j = 0; j<n; j++){
		printf("%d", a[j]);
	}
	printf("\n");
}

//ֱ�Ӳ���������
void InsertSort(int a[], int n)
{
	for (int i = 1; i<n; i++){
		if (a[i] < a[i - 1]){//���� i ��Ԫ�ش��� i-1 Ԫ����ֱ�Ӳ��룻��֮����Ҫ�ҵ��ʵ��Ĳ���λ�ú��ڲ��롣
			int j = i - 1;
			int x = a[i];
			while (j>-1 && x < a[j]){  //����˳����ҷ�ʽ�ҵ������λ�ã��ڲ��ҵ�ͬʱ���������е�Ԫ�ؽ��к��Ʋ�����������Ԫ���ڳ��ռ�
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = x;      //���뵽��ȷλ��
		}
		print(a, n, i);//��ӡÿ�������Ľ��
	}
}

//�۰�����㷨
void BInsertSort(int a[], int size){
	int i, j, low = 0, high = 0, mid;
	int temp = 0;
	for (i = 1; i<size; i++) {
		low = 0;
		high = i - 1;
		temp = a[i];
		//�����۰���ҷ��жϲ���λ�ã����ձ��� low ��ʾ����λ��
		while (low <= high) {
			mid = (low + high) / 2;
			if (a[mid]>temp) {
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		//������в���λ�ú��Ԫ��ͳһ����
		for (j = i; j>low; j--) {
			a[j] = a[j - 1];
		}
		a[low] = temp;//����Ԫ��
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