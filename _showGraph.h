#ifndef _showGraph_h
#define _showGraph_h
#include "_struct.h"
#include <iostream>
using namespace std;

void showGraph() {
	for (int i = 0; i < G.vertexNumber; i++)
		for (int j = 0; j < G.vertexNumber; j++) {
			cout << G.matrix[i][j] << "\t";
			if (j == G.vertexNumber - 1) cout << "\n";
		}
	return;
}


#endif
