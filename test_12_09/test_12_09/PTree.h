#define MAX_TREE_SIZE 100
typedef struct TElemType
{
	int a;//��������������
}TElemType;
typedef struct PTNode //
{
	TElemType data;
	int parent;
}PTNode;
typedef struct PTree
{
	PTNode node[MAX_TREE_SIZE];
	int r, n;//������λ�úͽ�����
}PTree;