#include<stdio.h>

typedef struct {
	int weight;
	int parent, Ich, rch;
}HTNode, *HuffmanTree;

void CreatHuffmanTree(HuffmanTree HT, int n);
void CreatHuffmanCode(HuffmanTree HT, HuffmanCode HC, int n);