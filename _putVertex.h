#ifndef _putVertex_h
#define _putVertex_h
#include "_struct.h"
#include<iostream>
using namespace std;

void putVertex(matirxGraph G, int number, char value) {
    if (number >= G.vertexNumber || number < 0) {
        cout << "��������ȷ�Ķ������\n";
    }
    else {
        G.vertexList[number] = value;
        cout << "�޸����\n";
    }

    cout << G.vertexList;
}

#endif