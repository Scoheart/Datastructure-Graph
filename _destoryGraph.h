#ifndef _destoryGraph_h
#define _destoryGraph_h
#include "_struct.h"
#include <iostream>
using namespace std;

void destroyGraph(matirxGraph& G) {
    int i, j;
    for (i = 0; i < G.vertexNumber; i++)
        for (j = 0; j < G.vertexNumber; j++)
        {
            G.matrix[i][j] = 0;
        }
    G.vertexNumber = 0;
    G.arcNumber = 0;

    return;
}

#endif 

