#ifndef _firstAdjacentVertex_h
#define _firstAdjacentVertex_h
#include<iostream>
using namespace std;
#include "_struct.h"
#include "_locateVertex.h"

void firstAdjacentVertex(matirxGraph G, char u) {
	int index = locateVertex(G, u);
	if (index == -1) {
		cout << "没有这个顶点";
	}
	int flag = -1;
	for (int i = 0; i < G.vertexNumber; i++) {
		if (G.matrix[index][i] == 1) {
			cout << u << " 的第一个邻接顶点是 " << G.vertexList[i] << "\n";
			flag = 1;
			break;
		}
	}
	if (flag == -1) {
		cout << "没有邻接顶点";
	}

}


#endif 