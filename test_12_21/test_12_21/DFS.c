#define _CRT_SECURE_NO_WARNINGS 1
#include"AMGraph.h"

//���ݶ��㱾�����ݣ��жϳ������ڶ�ά�����е�λ��
int LocateVex(MGraph * G, VertexType v){
	int i = 0;
	//����һά���飬�ҵ�����v
	for (; i<G->vexnum; i++) {
		if (G->vexs[i] == v) {
			break;
		}
	}
	//����Ҳ����������ʾ��䣬����-1
	if (i>G->vexnum) {
		printf("no such vertex.\n");
		return -1;
	}
	return i;
}
//��������ͼ
void CreateDN(MGraph *G){
	scanf("%d,%d", &(G->vexnum), &(G->arcnum));
	for (int i = 0; i<G->vexnum; i++) {
		scanf("%d", &(G->vexs[i]));
	}
	for (int i = 0; i<G->vexnum; i++) {
		for (int j = 0; j<G->vexnum; j++) {
			G->arcs[i][j].adj = 0;
			G->arcs[i][j].info = NULL;
		}
	}
	for (int i = 0; i<G->arcnum; i++) {
		int v1, v2;
		scanf("%d,%d", &v1, &v2);
		int n = LocateVex(G, v1);
		int m = LocateVex(G, v2);
		if (m == -1 || n == -1) {
			printf("no this vertex\n");
			return;
		}
		G->arcs[n][m].adj = 1;
		G->arcs[m][n].adj = 1;//����ͼ�Ķ��׾��������Խ��߶Գ�
	}
}

int FirstAdjVex(MGraph G, int v)
{
	//�����������±�Ϊv�Ķ���֮���бߵĶ��㣬�������������е��±�
	for (int i = 0; i<G.vexnum; i++){
		if (G.arcs[v][i].adj){
			return i;
		}
	}
	return -1;
}
int NextAdjVex(MGraph G, int v, int w)
{
	//��ǰһ������λ��w����һ��λ�ÿ�ʼ������֮���бߵĶ���
	for (int i = w + 1; i<G.vexnum; i++){
		if (G.arcs[v][i].adj){
			return i;
		}
	}
	return -1;
}
void visitVex(MGraph G, int v){
	printf("%d ", G.vexs[v]);
}
void DFS(MGraph G, int v){
	visited[v] = true;//���Ϊtrue
	visitVex(G, v); //���ʵ�v ������
	//�Ӹö���ĵ�һ���߿�ʼ��һֱ�����һ���ߣ��Դ��ڱ���һ�˵Ķ������DFS����
	for (int w = FirstAdjVex(G, v); w >= 0; w = NextAdjVex(G, v, w)){
		//����ö���ı��λfalse��֤��δ�����ʣ��������������������
		if (!visited[w]){
			DFS(G, w);
		}
	}
}
//�����������
void DFSTraverse(MGraph G){//
	int v;
	//��������ǵ�visit�����ʼ��Ϊfalse
	for (v = 0; v < G.vexnum; ++v){
		visited[v] = false;
	}
	//����ÿ�����Ϊfalse�Ķ���������������������
	for (v = 0; v < G.vexnum; v++){
		//����ö���ı��λΪfalse����������������������
		if (!visited[v]){
			DFS(G, v);
		}
	}
}

int main() {
	MGraph G;//����һ��ͼ�ı���
	CreateDN(&G);//��ʼ��ͼ
	DFSTraverse(G);//�����������ͼ
	return 0;
}