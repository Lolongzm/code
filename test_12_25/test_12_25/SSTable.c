#define _CRT_SECURE_NO_WARNINGS 1
#include"SSTable.h"

Search_seq(SSTable *ST, keyType key)
{
	ST->elem[0].key = key;
	int i = ST->length;
	while (ST->elem[i].key != key)
	{
		i--;
	}
	return i;
}

//�۰�����㷨
int Search_Bin(SSTable *ST, keyType key){
	int low = 1;//��ʼ״̬ low ָ��ָ���һ���ؼ���
	int high = ST->length;//high ָ�����һ���ؼ���
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;//int ����Ϊ���Σ����ԣ�mid ÿ��Ϊȡ��������
		if (ST->elem[mid].key == key)//��� mid ָ���ͬҪ���ҵ���ȣ����� mid ��ָ���λ��
		{
			return mid;
		}
		else if (ST->elem[mid].key>key)//���midָ��Ĺؼ��ֽϴ������ high ָ���λ��
		{
			high = mid - 1;
		}
		//��֮������� low ָ���λ��
		else{
			low = mid + 1;
		}
	}
	return 0;
}

