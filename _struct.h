#ifndef _STRUCT_H
#define _STRUCT_H

enum graphType {
	UDG, DG, UDN, DN
};

struct matirxGraph {
	int vertexNumber, arcNumber;
	char vertexList[100];
	int matrix[100][100];
	graphType grapType;
}G;

#endif