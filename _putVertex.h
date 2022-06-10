#ifndef _putVertex_h
#define _putVertex_h
#include "_struct.h"
#include<iostream>
using namespace std;

void putVertex(matirxGraph G, int number, char value) {
    if (number >= G.vertexNumber || number < 0) {
        cout << "请输入正确的顶点序号\n";
    }
    else {
        G.vertexList[number] = value;
        cout << "修改完成\n";
    }

    cout << G.vertexList;
}

#endif