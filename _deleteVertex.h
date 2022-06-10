#ifndef _deleteVertex_h
#define _deleteVertex_h
#include "_struct.h"
#include "_locateVertex.h"
#include "_showGraph.h"
void deleteVertex(matirxGraph& G, char u) {

	int index = locateVertex(G, u);

	for (int i = 0; i < G.vertexNumber; i++) {
		if (G.matrix[index][i])G.arcNumber--;
	}

	for (int i = index; i < G.vertexNumber; i++)
		G.vertexList[i] = G.vertexList[i + 1];

	for (int i = 0; i < G.vertexNumber; i++)
		for (int j = index; j < G.vertexNumber - 1; j++)
			G.matrix[i][j] = G.matrix[i][j + 1];

	for (int i = index; i < G.vertexNumber - 1; i++)
		for (int j = 0; j < G.vertexNumber; j++)
			G.matrix[i][j] = G.matrix[i + 1][j];

	G.vertexNumber--;

	/*for (int i = 0; i < G.vertexNumber; i++)
		for (int j = 0; j < G.vertexNumber; j++) {
			cout << G.matrix[i][j] << "\t";
			if (j == G.vertexNumber - 1) cout << "\n";
		}
	showGraph();*/
}
#endif