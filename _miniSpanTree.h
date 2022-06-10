#ifndef _miniSpanTree_h
#define _miniSpanTree_h
#include "_struct.h"
#include "_getVertex.h"
#include "_locateVertex.h"
#include "_struct.h"
#include "_DFSTraverse.h"
#include <vector>
#include <iostream>
using namespace std;
typedef struct//��������ṹ��(��ѡ��̱�) 
{
	char adjvex;//��ѡ��̱ߵ��ڽӵ� 
	int lowcost;//��ѡ��̱ߵ�Ȩֵ 
}ShortEdge;

int minimal(matirxGraph G, ShortEdge* shortedge)
{
	int i, j;
	int min, loc;

	min = 111111;
	for (i = 1; i < G.vertexNumber; i++)
	{
		if (min > shortedge[i].lowcost && shortedge[i].lowcost != 0)
		{
			min = shortedge[i].lowcost;
			loc = i;
		}
	}
	return loc;
}

void miniSpanTree(matirxGraph G)
{
	int i, j, k;
	ShortEdge shortedge[1111];
	for (i = 0; i < G.vertexNumber; i++)
		for (j = 0; j < G.vertexNumber; j++)
		{
			if (G.matrix[i][j] == 0)
				G.matrix[i][j] = 3235;
		}

	//1.������ʼ��start 
	k = locateVertex(G, getVertex(G, 0));
	for (i = 0; i < G.vertexNumber; i++)
	{
		shortedge[i].adjvex = getVertex(G, 0);
		shortedge[i].lowcost = G.matrix[k][i];
	}
	shortedge[k].lowcost = 0;//lowcostΪ0��ʾ�ö�������U���� 

	//2.���������� 
	for (i = 0; i < G.vertexNumber - 1; i++)//�Լ���U��ȥ�����·���Ķ��� 
	{
		k = minimal(G, shortedge);//�����·���Ķ��� 

		printf("%c->%c,%d\n", shortedge[k].adjvex, G.vertexList[k], shortedge[k].lowcost);//����ҵ������·��������·��Ȩֵ 
		shortedge[k].lowcost = 0;//���ҵ������·��������뼯��U�� 

		for (j = 0; j < G.vertexNumber; j++)//U�м������½ڵ㣬���ܳ����µ����·�����ʸ���shortedge���� 
		{
			if (G.matrix[k][j] < shortedge[j].lowcost)//�и���·������ʱ�������滻��shortedge���� 
			{
				shortedge[j].lowcost = G.matrix[k][j];
				shortedge[j].adjvex = G.vertexList[k];
			}
		}

	}
}

#endif 

