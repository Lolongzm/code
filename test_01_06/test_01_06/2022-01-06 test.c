#define _CRT_SECURE_NO_WARNINGS 1

//堆排序
#include <stdio.h>
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
//将以 r[s]为根结点的子树构成堆，堆中每个根结点的值都比其孩子结点的值大
void HeapAdjust(SqList * H, int s, int m){
	SqNote rc = H->r[s];//先对操作位置上的结点数据进行保存，放置后序移动元素丢失。
	//对于第 s 个结点，筛选一直到叶子结点结束
	for (int j = 2 * s; j <= m; j *= 2) {
		//找到值最大的孩子结点
		if (j + 1<m && (H->r[j].key<H->r[j + 1].key)) {
			j++;
		}
		//如果当前结点比最大的孩子结点的值还大，则不需要对此结点进行筛选，直接略过
		if (!(rc.key<H->r[j].key)) {
			break;
		}
		//如果当前结点的值比孩子结点中最大的值小，则将最大的值移至该结点，由于 rc 记录着该结点的值，所以该结点的值不会丢失
		H->r[s] = H->r[j];
		s = j;//s相当于指针的作用，指向其孩子结点，继续进行筛选
	}
	H->r[s] = rc;//最终需将rc的值添加到正确的位置
}
//交换两个记录的位置
void swap(SqNote *a, SqNote *b){
	int key = a->key;
	a->key = b->key;
	b->key = key;
}
void HeapSort(SqList *H){
	//构建堆的过程
	for (int i = H->length / 2; i>0; i--) {
		//对于有孩子结点的根结点进行筛选
		HeapAdjust(H, i, H->length);
	}
	//通过不断地筛选出最大值，同时不断地进行筛选剩余元素
	for (int i = H->length; i>1; i--) {
		//交换过程，即为将选出的最大值进行保存大表的最后，同时用最后位置上的元素进行替换，为下一次筛选做准备
		swap(&(H->r[1]), &(H->r[i]));
		//进行筛选次最大值的工作
		HeapAdjust(H, 1, i - 1);
	}
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
	HeapSort(L);
	for (int i = 1; i <= L->length; i++) {
		printf("%d ", L->r[i].key);
	}
	return 0;
}




//归并排序
#include <stdio.h>
#include <stdlib.h>
#define  MAX 8
typedef struct{
    int key;

}SqNode;
typedef struct{
    SqNode r[MAX];
    int length;

}SqList;
//SR中的记录分成两部分：下标从 i 至 m 有序，从 m+1 至 n 也有序，此函数的功能是合二为一至TR数组中，使整个记录表有序
void Merge(SqNode SR[], SqNode TR[], int i, int m, int n){
    int j, k;
    //将SR数组中的两部分记录按照从小到大的顺序添加至TR数组中
    for (j = m + 1, k = i; i <= m && j <= n; k++) {
        if (SR[i].key<SR[j].key) {
            TR[k] = SR[i++];

		}
		else{
            TR[k] = SR[j++];

		}

	}
    //将剩余的比目前TR数组中都大的记录复制到TR数组的最后位置
    while (i <= m) {
        TR[k++] = SR[i++];

	}
    while (j <= n) {
        TR[k++] = SR[j++];

}

}

void MSort(SqNode SR[], SqNode TR1[], int s, int t){
    SqNode TR2[MAX];
    //递归的出口
    if (s == t) {
        TR1[s] = SR[s];

}
		else{
        int m = (s + t) / 2;//每次递归将记录表中记录平分，直至每个记录各成一张表
        MSort(SR, TR2, s, m);//将分开的前半部分表中的记录进行排序
        MSort(SR, TR2, m + 1, t);//将后半部分表中的记录进行归并排序
        Merge(TR2, TR1, s, m, t);//最后将前半部分和后半部分中的记录统一进行排序

	}

}
//归并排序
void MergeSort(SqList *L){
    MSort(L->r, L->r, 1, L->length);

}

int main() {
    SqList * L = (SqList*)malloc(sizeof(SqList));
    L->length = 7;
    L->r[1].key = 49;
    L->r[2].key = 38;
    L->r[3].key = 65;
    L->r[4].key = 97;
    L->r[5].key = 76;
    L->r[6].key = 13;
    L->r[7].key = 27;
   MergeSort(L);
   for (int i = 1; i <= L->length; i++) 
   {
	   printf("%d ", L->r[i].key);

   }
   return 0;

}
