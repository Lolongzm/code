#define MAX_TREE_SIZE 100
typedef struct CTNode
{
	int child;
	struct CTNode* next;
}*ChildPtr;

typedef struct
{
	TElemType data;//��������������
	ChildPtr firstchild;//ÿ����������ͷָ��
}CTBox;

typedef struct
{
	CTBox nodes[MAX_TREE_SIZE];
	int n, r; //������͸�����λ��
}CTree;

