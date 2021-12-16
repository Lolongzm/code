#define _CRT_SECURE_NO_WARNINGS 1
#include"Huffman.h"

void CreatHuffmanTree(HuffmanTree HT, int n){ //�����������һ�������㷨
	if (n <= 1)return;
	m = 2 * n - 1; //���鹲2n-1��Ԫ��
	HT = malloc(sizeof((HTNode)*(m + 1)); //Q�ŵ�Ԫδ�ã� HT[m]��ʾ�����
	for (i = 1; i <= m; ++i){ //��2n-1��Ԫ�ص�Ich. rch. parent��Ϊ0
		HT[].Ich = 0; HT[i].rch = 0; HT[i].parent = 0;
	}
	for (i = 1; i <= n; ++i) scanf(&HT[i].weight); //����ǰn��Ԫ�ص�weightֵ
	//��ʼ�����������濪ʼ������������

	for (i = n + 1i <= m; i++){ //�ϲ�����n-1�����һ ����Huffman��
		Select(HT, i - 1, s1, s2); //��HT[k](1��k��i-1)��ѡ��������˫����Ϊ0,
		//��Ȩֵ��С�Ľ��,������������HT�е����s1��s2
		HT[s1].parent = i; HT[s2].parent = i; //��ʾ��F��ɾ��s1,s2
		HT[ij.Ich = s1; HT[i].rch = s2; //s1,s2�ֱ���Ϊi�����Һ���
		HT[i].weight = HT[s1].weight + HT[s2].weight; //i��ȨֵΪ���Һ���Ȩֵ֮��
	}


void CreatHuffmanCode(HuffmanTree HT, HuffmanCode HC, int n) //�����������㷨
{
	//��Ҷ�ӵ���������ÿ���ַ��Ĺ��������룬�洢�ڱ����HC��
	HC =  malloc(sizeof(char) *(n + 1));
	//����n���ַ������ͷָ��ʸ��
	cd = malloc(sizeof(char)*n);
	//������ʱ��ű���Ķ�̬����ռ�
	cd[n - 1] = '\0' ;
		//���������
	int i = 0;
	int start,c,f;
	for (i = 1; i <= n; ++i){
		//����ַ������������
		start = n - 1; c = i; f = HT[i].parent;
		while (f != O){
			// ��Ҷ�ӽ�㿪ʼ���ϻ��ݣ�ֱ�������
			--start;
			//����- -��start��ǰָһ��λ��
			if (HT[f].Ichild = = c) cd[start] = '0';
			//���c��f�����ӣ������ɴ���0
			else
				cd[start] = '1';
			//���c��f���Һ��ӣ������ɴ���1
			c = f; f = HT[f].parent;
			//������.�ϻ���
		}
		//�����1���ַ��ı���
		HC[i] = malloc(sizeof(char)*(n - start));
		//Ϊ��i���ַ����������ռ�
		strcpy(HC[i], &cd[start]);
		//����õı������ʱ�ռ�cd�� �Ƶ�HC�ĵ�ǰ����
	}
		free(cd);
		//�ͷ���ʱ�ռ�
	} // CreatHuffanCode
