#define _CRT_SECURE_NO_WARNINGS 1
#include"BSTree.h"

BSTree SearchBST(BSTree T, KeyType key)
{
	if (!T || T->data.key == key)
	{
		return T;
	}

	else if (T->data.key > key)
	{
		return SearchBST(T->lchild, key);
	}

	else
	{
		return SearchBST(T->rchild, key);
	}
}



//ɾ������
int Delete(BSTree *p)
{
	BSTree q, s;
	//��� 1����� p ����ΪҶ�ӽ�㣬ֱ��ɾ������
	if (!(*p)->lchild && !(*p)->rchild) {
		*p = NULL;
	}
	else if (!(*p)->lchild) { //������Ϊ�գ�ֻ���ý�� p ������������������ p ���ɣ�
		q = *p;
		*p = (*p)->rchild;
		free(q);
	}
	else if (!(*p)->rchild) {//������Ϊ�գ�ֻ���ý�� p ������������������ p ���ɣ�
		q = *p;
		*p = (*p)->lchild;//���ﲻ��ָ�� *p ָ�������������ǽ��������洢�Ľ��ĵ�ַ��ֵ��ָ����� p
		free(q);
	}
	else {//������������Ϊ�գ����õ� 2 �ַ�ʽ
		q = *p;
		s = (*p)->lchild;
		//�������ҵ���� p ��ֱ��ǰ��
		while (s->rchild)
		{
			q = s;
			s = s->rchild;
		}
		//ֱ�Ӹı��� p ��ֵ
		(*p)->data = s->data;
		//�жϽ�� p �������� s �Ƿ�������������Ϊ�����������
		if (q != *p) {
			q->rchild = s->lchild;//���У�����ɾ��ֱ��ǰ������ͬʱ����ǰ�������ӽ���Ϊ q ָ����ĺ��ӽ��
		}
		else {
			q->lchild = s->lchild;//����ֱ�ӽ����������Ƽ���
		}
		free(s);
	}
	return TRUE;
}
int DeleteBST(BSTree *T, int key)
{
	if (!(*T)) {//�����ڹؼ��ֵ���key������Ԫ��
		return FALSE;
	}
	else
	{
		if (key == (*T)->data) {
			Delete(T);
			return TRUE;
		}
		else if (key < (*T)->data) {
			//ʹ�õݹ�ķ�ʽ
			return DeleteBST(&(*T)->lchild, key);
		}
		else {
			return DeleteBST(&(*T)->rchild, key);
		}
	}
}
