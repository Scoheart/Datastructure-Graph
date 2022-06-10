#ifndef _DFSTraverse_h
#define _DFSTraverse_h
#include "_struct.h"
#include "_getVertex.h"
#include <queue>
#include <iostream>
using namespace std;

bool visitied[100];//访问标志
void  InitVsitied(bool* visitied)
{
    int  i;
    for (i = 0; i < 100; i++)
        visitied[i] = false;
}
int w1;

void DFSTraverse(matirxGraph G, int v)//深度优先搜索邻接矩阵
{

    cout << G.vertexList[v] << "\t";//访问第v个节点
    visitied[v] = true;//置访问标志为TRUE
    int w;
    for (w = 0; w < G.vertexNumber; w++)
    {
        if (G.matrix[v][w] != 0 && visitied[w] == false)
        {
            w1 = w;
            DFSTraverse(G, w1);
        }
    }
}
#endif

