#ifndef _getVertex_h
#define _getVertex_h
#include "_struct.h"
#include <iostream>
using namespace std;
char getVertex(matirxGraph G, int v) {

    if (v >= G.vertexNumber || v < 0) {
        cout << "��������ȷ�Ķ������\n";
        //��������
        return 0;
    }
    return G.vertexList[v];
}
#endif 

