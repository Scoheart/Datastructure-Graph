#ifndef _nextAdjacentVertex_h
#define _nextAdjacentVertex_h

#include"_struct.h"
#include "_locateVertex.h"
#include<iostream>
using namespace std;


void nextAdjacentVertex(matirxGraph G, char u, char w) {
	int index1 = locateVertex(G, u);
	int index2 = locateVertex(G, w);

	int flag = -1;
	for (int i = index2 + 1; i < G.vertexNumber; i++) {
		if (G.matrix[index1][i] == 1) {
			cout << u << "相对于 " << w << " 的下一个邻接顶点是 " << G.vertexList[i];
			flag = 1;
			break;
		}
	}

	if (flag == -1) {
		cout << w << "是最后一个邻接顶点";
	}
}


#endif
