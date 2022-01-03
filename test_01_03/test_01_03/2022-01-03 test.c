#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ð�������㷨��
//���� a �� b ��λ�õĺ���
void swap(int *a, int *b);
int main()
{
	int array[8] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int i, j;
	int key;
	//�ж��ټ�¼������Ҫ���ٴ�ð�ݣ����ȽϹ��̣����м�¼��������������ʱ���������
	for (i = 1; i < 8; i++){
		key = 0;//ÿ�ο�ʼð��ǰ����ʼ�� key ֵΪ 0
		//ÿ�����ݴ��±�Ϊ 0 ��ʼ���� 8-i ����
		for (j = 0; j<8 - i; j++){
			if (array[j] > array[j + 1]){
				key = 1;
				swap(&array[j], &array[j + 1]);
			}
		}
		//��� key ֵΪ 0���������м�¼�������
		if (key == 0) {
			break;
		}
	}
	for (i = 0; i < 8; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}




//�������������㷨��
#include <stdlib.h>
#define MAX 9
//������¼�Ľṹ��
typedef struct {
    int key;

}SqNote;
//��¼��Ľṹ��
typedef struct {
    SqNote r[MAX];
    int length;

}SqList;
//�˷����У��洢��¼�������У��±�Ϊ 0 ��λ��ʱ���ŵģ������κμ�¼����¼���±�Ϊ 1 ����ʼ���δ��
int Partition(SqList *L, int low, int high){
    L->r[0] = L->r[low];
    int pivotkey = L->r[low].key;
    //ֱ����ָ���������������
    while (low<high) {
        //highָ�����ƣ�ֱ��������pivotkeyֵС�ļ�¼��ָ��ֹͣ�ƶ�
        while (low<high && L->r[high].key >= pivotkey) {
            high--;

		}
        //ֱ�ӽ�highָ���С��֧��ļ�¼�ƶ���lowָ���λ�á�
        L->r[low] = L->r[high];
        //low ָ�����ƣ�ֱ��������pivotkeyֵ��ļ�¼��ָ��ֹͣ�ƶ�
        while (low<high && L->r[low].key <= pivotkey) {
            low++;

		}
        //ֱ�ӽ�lowָ��Ĵ���֧��ļ�¼�ƶ���highָ���λ��
        L->r[high] = L->r[low];

	}
    //��֧����ӵ�׼ȷ��λ��
    L->r[low] = L->r[0];
    return low;

}
void QSort(SqList *L, int low, int high){
    if (low<high) {
        //�ҵ�֧���λ��
        int pivotloc = Partition(L, low, high);
        //��֧�������ӱ��������
        QSort(L, low, pivotloc - 1);
        //��֧���Ҳ���ӱ��������
        QSort(L, pivotloc + 1, high);

	}

}
void QuickSort(SqList *L){
    QSort(L, 1, L->length);

}
int main() {
    SqList * L = (SqList*)malloc(sizeof(SqList));
    L->length = 8;
    L->r[1].key = 49;
    L->r[2].key = 38;
    L->r[3].key = 65;
    L->r[4].key = 97;
    L->r[5].key = 76;
    L->r[6].key = 13;
    L->r[7].key = 27;
    L->r[8].key = 49;
    QuickSort(L);
    for (int i = 1; i <= L->length; i++) {
        printf("%d ", L->r[i].key);

	}
    return 0;

}




//��ѡ�������㷨��
#define MAX 9
//������¼�Ľṹ��
typedef struct {
	int key;
}SqNote;
//��¼��Ľṹ��
typedef struct {
	SqNote r[MAX];
	int length;
}SqList;
//����������¼��λ��
void swap(SqNote *a, SqNote *b){
	int key = a->key;
	a->key = b->key;
	b->key = key;
}
//���ұ��йؼ��ֵ���Сֵ
int SelectMinKey(SqList *L, int i){
	int min = i;
	//���±�Ϊ i+1 ��ʼ��һֱ���������һ���ؼ��֣��ҵ���Сֵ���ڵ�λ��
	while (i + 1<L->length) {
		if (L->r[min].key>L->r[i + 1].key) {
			min = i + 1;
		}
		i++;
	}
	return min;
}
//��ѡ�������㷨ʵ�ֺ���
void SelectSort(SqList * L){
	for (int i = 0; i<L->length; i++) {
		//���ҵ� i ��λ����Ҫ���õ���Сֵ��λ��
		int j = SelectMinKey(L, i);
		//��� j �� i ����ȣ�˵����Сֵ�����±�Ϊ i ��λ�ã���Ҫ����
		if (i != j) {
			swap(&(L->r[i]), &(L->r[j]));
		}
	}
}

int main() {
	SqList * L = (SqList*)malloc(sizeof(SqList));
	L->length = 8;
	L->r[0].key = 49;
	L->r[1].key = 38;
	L->r[2].key = 65;
	L->r[3].key = 97;
	L->r[4].key = 76;
	L->r[5].key = 13;
	L->r[6].key = 27;
	L->r[7].key = 49;
	SelectSort(L);
	for (int i = 0; i<L->length; i++) {
		printf("%d ", L->r[i].key);
	}
	return 0;
}