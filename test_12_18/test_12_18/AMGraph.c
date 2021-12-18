#define _CRT_SECURE_NO_WARNINGS 1
#include"AMGraph.h"

//���ݶ��㱾�����ݣ��жϳ������ڶ�ά�����е�λ��
int LocateVex(MGraph * G, VertexType v)
{
	int i = 0;
	//����һά���飬�ҵ�����v
	for (; i<G->vexnum; i++)
	{
		if (G->vexs[i] == v)
		{
			break;
		}
	}
	//����Ҳ����������ʾ��䣬����-1
	if (i>G->vexnum)
	{
		printf("no such vertex.\n");
		return -1;
	}
	return i;
}


//������������������ͼΨһ��������Ƕ��׾����д洢����Ȩֵ
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
		G->arcs[m][n].adj = w;//����Գ�
	}
}



//������������������ͼ��ͬ���Ƕ��׾����д洢����Ȩֵ��
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