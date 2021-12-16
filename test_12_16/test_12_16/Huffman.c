#define _CRT_SECURE_NO_WARNINGS 1
#include"Huffman.h"

void CreatHuffmanTree(HuffmanTree HT, int n){ //构造哈夫曼树一哈夫曼算法
	if (n <= 1)return;
	m = 2 * n - 1; //数组共2n-1个元素
	HT = malloc(sizeof((HTNode)*(m + 1)); //Q号单元未用， HT[m]表示根结点
	for (i = 1; i <= m; ++i){ //将2n-1个元素的Ich. rch. parent置为0
		HT[].Ich = 0; HT[i].rch = 0; HT[i].parent = 0;
	}
	for (i = 1; i <= n; ++i) scanf(&HT[i].weight); //输入前n个元素的weight值
	//初始化结束，下面开始建立哈夫曼树

	for (i = n + 1i <= m; i++){ //合并产生n-1个结点一 构造Huffman树
		Select(HT, i - 1, s1, s2); //在HT[k](1≤k≤i-1)中选择两个其双亲域为0,
		//且权值最小的结点,并返回它们在HT中的序号s1和s2
		HT[s1].parent = i; HT[s2].parent = i; //表示从F中删除s1,s2
		HT[ij.Ich = s1; HT[i].rch = s2; //s1,s2分别作为i的左右孩子
		HT[i].weight = HT[s1].weight + HT[s2].weight; //i的权值为左右孩子权值之和
	}


void CreatHuffmanCode(HuffmanTree HT, HuffmanCode HC, int n) //哈夫曼编码算法
{
	//从叶子到根逆向求每个字符的哈夫曼编码，存储在编码表HC中
	HC =  malloc(sizeof(char) *(n + 1));
	//分配n个字符编码的头指针矢量
	cd = malloc(sizeof(char)*n);
	//分配临时存放编码的动态数组空间
	cd[n - 1] = '\0' ;
		//编码结束符
	int i = 0;
	int start,c,f;
	for (i = 1; i <= n; ++i){
		//逐个字符求哈夫曼编码
		start = n - 1; c = i; f = HT[i].parent;
		while (f != O){
			// 从叶子结点开始向上回溯，直到根结点
			--start;
			//回溯- -次start向前指一个位置
			if (HT[f].Ichild = = c) cd[start] = '0';
			//结点c是f的左孩子，则生成代码0
			else
				cd[start] = '1';
			//结点c是f的右孩子，则生成代码1
			c = f; f = HT[f].parent;
			//继续向.上回溯
		}
		//求出第1个字符的编码
		HC[i] = malloc(sizeof(char)*(n - start));
		//为第i个字符串编码分配空间
		strcpy(HC[i], &cd[start]);
		//将求得的编码从临时空间cd复 制到HC的当前行中
	}
		free(cd);
		//释放临时空间
	} // CreatHuffanCode
