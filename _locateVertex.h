#ifndef _LOCATEVERTEX_H
#define _LOCATEVERTEX_H

#include"_struct.h"
#include <iostream>
using namespace std;
int locateVertex(matirxGraph G, char u) {

	for (int i = 0; i < G.vertexNumber; i++) {
		if (G.vertexList[i] == u) {
			return i;
		}
	}

	return -1;
}

#endif 

