#include <stdio.h>
#define MAX_VERtEX_NUM 20                   //�����������
#define VRType int                          //��ʾ����֮��Ĺ�ϵ�ı�������
#define InfoType char                       //�洢�����߱߶�����Ϣ��ָ���������
#define VertexType int      //ͼ�ж������������
typedef enum{ DG, DN, UDG, UDN }GraphKind;       //ö��ͼ�� 4 ������
typedef struct {
	VRType adj;                             //������Ȩͼ���� 1 �� 0 ��ʾ�Ƿ����ڣ����ڴ�Ȩͼ��ֱ��ΪȨֵ��
	InfoType * info;                        //����߶��⺬�е���Ϣָ��
}ArcCell, AdjMatrix[MAX_VERtEX_NUM][MAX_VERtEX_NUM];

typedef struct {
	VertexType vexs[MAX_VERtEX_NUM];        //�洢ͼ�ж�������
	AdjMatrix arcs;                         //��ά���飬��¼����֮��Ĺ�ϵ
	int vexnum, arcnum;                      //��¼ͼ�Ķ������ͻ����ߣ���
	GraphKind kind;                         //��¼ͼ������
}MGraph;
