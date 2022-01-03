#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序算法：
//交换 a 和 b 的位置的函数
void swap(int *a, int *b);
int main()
{
	int array[8] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int i, j;
	int key;
	//有多少记录，就需要多少次冒泡，当比较过程，所有记录都按照升序排列时，排序结束
	for (i = 1; i < 8; i++){
		key = 0;//每次开始冒泡前，初始化 key 值为 0
		//每次起泡从下标为 0 开始，到 8-i 结束
		for (j = 0; j<8 - i; j++){
			if (array[j] > array[j + 1]){
				key = 1;
				swap(&array[j], &array[j + 1]);
			}
		}
		//如果 key 值为 0，表明表中记录排序完成
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




//快速排序完整算法：
#include <stdlib.h>
#define MAX 9
//单个记录的结构体
typedef struct {
    int key;

}SqNote;
//记录表的结构体
typedef struct {
    SqNote r[MAX];
    int length;

}SqList;
//此方法中，存储记录的数组中，下标为 0 的位置时空着的，不放任何记录，记录从下标为 1 处开始依次存放
int Partition(SqList *L, int low, int high){
    L->r[0] = L->r[low];
    int pivotkey = L->r[low].key;
    //直到两指针相遇，程序结束
    while (low<high) {
        //high指针左移，直至遇到比pivotkey值小的记录，指针停止移动
        while (low<high && L->r[high].key >= pivotkey) {
            high--;

		}
        //直接将high指向的小于支点的记录移动到low指针的位置。
        L->r[low] = L->r[high];
        //low 指针右移，直至遇到比pivotkey值大的记录，指针停止移动
        while (low<high && L->r[low].key <= pivotkey) {
            low++;

		}
        //直接将low指向的大于支点的记录移动到high指针的位置
        L->r[high] = L->r[low];

	}
    //将支点添加到准确的位置
    L->r[low] = L->r[0];
    return low;

}
void QSort(SqList *L, int low, int high){
    if (low<high) {
        //找到支点的位置
        int pivotloc = Partition(L, low, high);
        //对支点左侧的子表进行排序
        QSort(L, low, pivotloc - 1);
        //对支点右侧的子表进行排序
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




//简单选择排序算法：
#define MAX 9
//单个记录的结构体
typedef struct {
	int key;
}SqNote;
//记录表的结构体
typedef struct {
	SqNote r[MAX];
	int length;
}SqList;
//交换两个记录的位置
void swap(SqNote *a, SqNote *b){
	int key = a->key;
	a->key = b->key;
	b->key = key;
}
//查找表中关键字的最小值
int SelectMinKey(SqList *L, int i){
	int min = i;
	//从下标为 i+1 开始，一直遍历至最后一个关键字，找到最小值所在的位置
	while (i + 1<L->length) {
		if (L->r[min].key>L->r[i + 1].key) {
			min = i + 1;
		}
		i++;
	}
	return min;
}
//简单选择排序算法实现函数
void SelectSort(SqList * L){
	for (int i = 0; i<L->length; i++) {
		//查找第 i 的位置所要放置的最小值的位置
		int j = SelectMinKey(L, i);
		//如果 j 和 i 不相等，说明最小值不在下标为 i 的位置，需要交换
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