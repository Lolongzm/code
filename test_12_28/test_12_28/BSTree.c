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



//删除函数
int Delete(BSTree *p)
{
	BSTree q, s;
	//情况 1，结点 p 本身为叶子结点，直接删除即可
	if (!(*p)->lchild && !(*p)->rchild) {
		*p = NULL;
	}
	else if (!(*p)->lchild) { //左子树为空，只需用结点 p 的右子树根结点代替结点 p 即可；
		q = *p;
		*p = (*p)->rchild;
		free(q);
	}
	else if (!(*p)->rchild) {//右子树为空，只需用结点 p 的左子树根结点代替结点 p 即可；
		q = *p;
		*p = (*p)->lchild;//这里不是指针 *p 指向左子树，而是将左子树存储的结点的地址赋值给指针变量 p
		free(q);
	}
	else {//左右子树均不为空，采用第 2 种方式
		q = *p;
		s = (*p)->lchild;
		//遍历，找到结点 p 的直接前驱
		while (s->rchild)
		{
			q = s;
			s = s->rchild;
		}
		//直接改变结点 p 的值
		(*p)->data = s->data;
		//判断结点 p 的左子树 s 是否有右子树，分为两种情况讨论
		if (q != *p) {
			q->rchild = s->lchild;//若有，则在删除直接前驱结点的同时，令前驱的左孩子结点改为 q 指向结点的孩子结点
		}
		else {
			q->lchild = s->lchild;//否则，直接将左子树上移即可
		}
		free(s);
	}
	return TRUE;
}
int DeleteBST(BSTree *T, int key)
{
	if (!(*T)) {//不存在关键字等于key的数据元素
		return FALSE;
	}
	else
	{
		if (key == (*T)->data) {
			Delete(T);
			return TRUE;
		}
		else if (key < (*T)->data) {
			//使用递归的方式
			return DeleteBST(&(*T)->lchild, key);
		}
		else {
			return DeleteBST(&(*T)->rchild, key);
		}
	}
}
