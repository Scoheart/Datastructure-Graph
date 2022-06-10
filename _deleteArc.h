#ifndef _deleteArc_h
#define _deleteArc_h
#include "_struct.h"
#include "_locateVertex.h"
void deleteArc(matirxGraph& G, char v, char w) {

    int k1 = locateVertex(G, v);
    int k2 = locateVertex(G, w);

    if (G.grapType == DG)
    {
        G.matrix[k1][k2] = 0;
    }
    else if (G.grapType == UDG)
    {
        G.matrix[k1][k2] = G.matrix[k2][k1] = 0;
    }
    else if (G.grapType == DN)
    {
        G.matrix[k1][k2] = 0;
    }
    else if (G.grapType == UDN)
    {
        G.matrix[k1][k2] = G.matrix[k2][k1] = 0;
    }
    G.arcNumber--;
}

#endif 
