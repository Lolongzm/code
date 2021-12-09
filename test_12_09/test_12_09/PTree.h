#define MAX_TREE_SIZE 100
typedef struct TElemType
{
	int a;//任意数据域类型
}TElemType;
typedef struct PTNode //
{
	TElemType data;
	int parent;
}PTNode;
typedef struct PTree
{
	PTNode node[MAX_TREE_SIZE];
	int r, n;//根结点的位置和结点个数
}PTree;