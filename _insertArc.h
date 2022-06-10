#ifndef _insertArc_h
#define _insertArc_h
#include "_struct.h"
#include "_locateVertex.h"
#include<iostream>
using namespace std;
void insertArc(matirxGraph& G, char v, char w) {

    int k1 = locateVertex(G, v);
    int k2 = locateVertex(G, w);

    if (G.grapType == DG)
    {
        G.matrix[k1][k2] = 1;
    }
    else if (G.grapType == UDG)
    {
        G.matrix[k1][k2] = G.matrix[k2][k1] = 1;
    }
    else if (G.grapType == DN)
    {
        int weight;
        cout << "请输入该边的权值:" << endl;
        cin >> weight;
        G.matrix[k1][k2] = weight;
    }
    else if (G.grapType == UDN)
    {
        int weight;
        cout << "请输入该边的权值:" << endl;
        cin >> weight;
        G.matrix[k1][k2] = G.matrix[k2][k1] = weight;
    }
    G.arcNumber++;
}

#endif

