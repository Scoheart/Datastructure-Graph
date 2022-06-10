#ifndef _insertVertex_h
#define _insertVertex_h
#include "_struct.h"

void insertVertex(matirxGraph& G, char u) {
	G.vertexList[G.vertexNumber] = u;
	G.vertexNumber++;
}


#endif
