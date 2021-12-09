#define MAX_TREE_SIZE 100
typedef struct CTNode
{
	int child;
	struct CTNode* next;
}*ChildPtr;

typedef struct
{
	TElemType data;//可任意数据类型
	ChildPtr firstchild;//每个孩子链表头指针
}CTBox;

typedef struct
{
	CTBox nodes[MAX_TREE_SIZE];
	int n, r; //结点数和根结点的位置
}CTree;

