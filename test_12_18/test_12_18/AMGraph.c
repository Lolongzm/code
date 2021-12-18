#define _CRT_SECURE_NO_WARNINGS 1
#include"AMGraph.h"

//根据顶点本身数据，判断出顶点在二维数组中的位置
int LocateVex(MGraph * G, VertexType v)
{
	int i = 0;
	//遍历一维数组，找到变量v
	for (; i<G->vexnum; i++)
	{
		if (G->vexs[i] == v)
		{
			break;
		}
	}
	//如果找不到，输出提示语句，返回-1
	if (i>G->vexnum)
	{
		printf("no such vertex.\n");
		return -1;
	}
	return i;
}


//构造无向网。和无向图唯一的区别就是二阶矩阵中存储的是权值
void CreateUDN(MGraph* G)
{
	scanf("%d,%d", &(G->vexnum), &(G->arcnum));
	for (int i = 0; i < G->vexnum; i++)
	{
		scanf("%d", &(G->vexs[i]));
	}
	for (int i = 0; i < G->vexnum; i++)
	{
		for (int j = 0; j < G->vexnum; j++)
		{
			G->arcs[i][j].adj = 0;
			G->arcs[i][j].info = NULL;

		}
	}
	for (int i = 0; i < G->arcnum; i++)
	{
		int v1, v2, w;
		scanf("%d,%d,%d", &v1, &v2, &w);
		int m = LocateVex(G, v1);
		int n = LocateVex(G, v2);
		if (m == -1 || n == -1)
		{
			printf("no this vertex\n");
			return;
		}
		G->arcs[n][m].adj = w;
		G->arcs[m][n].adj = w;//矩阵对称
	}
}



//构造有向网，和有向图不同的是二阶矩阵中存储的是权值。
void CreateUDG(MGraph *G)
{
	scanf("%d,%d", &(G->vexnum), &(G->arcnum));
	for (int i = 0; i < G->vexnum; i++)
	{
		scanf("%d", &(G->vexs[i]));
	}
	for (int i = 0; i < G->vexnum; i++)
	{
		for (int j = 0; j < G->vexnum; j++)
		{
			G->arcs[i][j].adj = 0;
			G->arcs[i][j].info = NULL;
		}
	}
	for (int i = 0; i < G->arcnum; i++)
	{
		int v1, v2, w;
		scanf("%d,%d,%d", &v1, &v2, &w);
		int n = LocateVex(G, v1);
		int m = LocateVex(G, v2);
		if (m == -1 || n == -1) {
			printf("no this vertex\n");
			return;
		}
		G->arcs[n][m].adj = w;
	}
}