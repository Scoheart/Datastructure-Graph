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
			cout << u << "����� " << w << " ����һ���ڽӶ����� " << G.vertexList[i];
			flag = 1;
			break;
		}
	}

	if (flag == -1) {
		cout << w << "�����һ���ڽӶ���";
	}
}


#endif
