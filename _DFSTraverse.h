#ifndef _DFSTraverse_h
#define _DFSTraverse_h
#include "_struct.h"
#include "_getVertex.h"
#include <queue>
#include <iostream>
using namespace std;

bool visitied[100];//���ʱ�־
void  InitVsitied(bool* visitied)
{
    int  i;
    for (i = 0; i < 100; i++)
        visitied[i] = false;
}
int w1;

void DFSTraverse(matirxGraph G, int v)//������������ڽӾ���
{

    cout << G.vertexList[v] << "\t";//���ʵ�v���ڵ�
    visitied[v] = true;//�÷��ʱ�־ΪTRUE
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

