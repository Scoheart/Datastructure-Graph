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
typedef struct//辅助数组结构体(候选最短边) 
{
	char adjvex;//候选最短边的邻接点 
	int lowcost;//候选最短边的权值 
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

	//1.处理起始点start 
	k = locateVertex(G, getVertex(G, 0));
	for (i = 0; i < G.vertexNumber; i++)
	{
		shortedge[i].adjvex = getVertex(G, 0);
		shortedge[i].lowcost = G.matrix[k][i];
	}
	shortedge[k].lowcost = 0;//lowcost为0表示该顶点属于U集合 

	//2.处理后续结点 
	for (i = 0; i < G.vertexNumber - 1; i++)//对集合U，去找最短路径的顶点 
	{
		k = minimal(G, shortedge);//找最短路径的顶点 

		printf("%c->%c,%d\n", shortedge[k].adjvex, G.vertexList[k], shortedge[k].lowcost);//输出找到的最短路径顶，及路径权值 
		shortedge[k].lowcost = 0;//将找到的最短路径顶点加入集合U中 

		for (j = 0; j < G.vertexNumber; j++)//U中加入了新节点，可能出现新的最短路径，故更新shortedge数组 
		{
			if (G.matrix[k][j] < shortedge[j].lowcost)//有更短路径出现时，将其替换进shortedge数组 
			{
				shortedge[j].lowcost = G.matrix[k][j];
				shortedge[j].adjvex = G.vertexList[k];
			}
		}

	}
}

#endif 

