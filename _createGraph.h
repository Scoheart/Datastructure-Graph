#ifndef _CREATEGRAPH_H
#define _CREATEGRAPH_H
#include <iostream>
#include "_struct.h"
#include"_locateVertex.h"
using namespace std;

void creat_matirxGraph(matirxGraph &G) {

	char v1, v2;
	int weight;

	cout << "请输入图的类型(无向图输入0, 有向图输入1,无向网输入2,有向网输入3):\n";
	int type;
	cin >> type;
	if (type == DG)
	{
		G.grapType = DG;
	}
	else if (type == UDG)
	{
		G.grapType = UDG;
	}
	else if (type == DN)
	{
		G.grapType = DN;
	}
	else if (type == UDN)
	{
		G.grapType = UDN;
	}
	switch (type) {
	case 0:
		cout << "请输入图的顶点数, 边数:\n";
		cin >> G.vertexNumber >> G.arcNumber;

		cout << "请输入图的顶点的信息:\n";
		for (int i = 0; i < G.vertexNumber; i++) {
			cin >> G.vertexList[i];
		}

		for (int i = 0; i < G.vertexNumber; i++)
			for (int j = 0; j < G.vertexNumber; j++) {
				G.matrix[i][j] = 0;
			}

		cout << "请输入图的顶点和边之间的连通性信息:\n";
		for (int i = 0; i < G.arcNumber; i++) {
			cin >> v1 >> v2;
			int rowLoc = locateVertex(G, v1);
			int columnLoc = locateVertex(G, v2);
			G.matrix[rowLoc][columnLoc] = 1;
			G.matrix[columnLoc][rowLoc] = G.matrix[rowLoc][columnLoc];
		}; break;

	case 1:
		cout << "请输入图的顶点数, 边数:\n";
		cin >> G.vertexNumber >> G.arcNumber;

		cout << "请输入图的顶点的信息:\n";
		for (int i = 0; i < G.vertexNumber; i++) {
			cin >> G.vertexList[i];
		}

		for (int i = 0; i < G.vertexNumber; i++)
			for (int j = 0; j < G.vertexNumber; j++) {
				G.matrix[i][j] = 0;
			}

		cout << "请输入图的顶点和边之间的连通性信息:\n";
		for (int i = 0; i < G.arcNumber; i++) {
			cin >> v1 >> v2;
			int rowLoc = locateVertex(G, v1);
			int columnLoc = locateVertex(G, v2);
			G.matrix[rowLoc][columnLoc] = 1;
		}; break;

	case 2:
		cout << "请输入图的顶点数, 边数:\n";
		cin >> G.vertexNumber >> G.arcNumber;

		cout << "请输入图的顶点的信息:\n";
		for (int i = 0; i < G.vertexNumber; i++) {
			cin >> G.vertexList[i];
		}

		for (int i = 0; i < G.vertexNumber; i++)
			for (int j = 0; j < G.vertexNumber; j++) {
				G.matrix[i][j] = 0;
			}

		cout << "请输入图的顶点和边之间的连通性信息以及边的权值:\n";
		for (int i = 0; i < G.arcNumber; i++) {
			cin >> v1 >> v2 >> weight;
			int rowLoc = locateVertex(G, v1);
			int columnLoc = locateVertex(G, v2);
			G.matrix[rowLoc][columnLoc] = weight;
			G.matrix[columnLoc][rowLoc] = G.matrix[rowLoc][columnLoc];
		}; break;

	case 3:
		cout << "请输入图的顶点数, 边数:\n";
		cin >> G.vertexNumber >> G.arcNumber;

		cout << "请输入图的顶点的信息:\n";
		for (int i = 0; i < G.vertexNumber; i++) {
			cin >> G.vertexList[i];
		}

		for (int i = 0; i < G.vertexNumber; i++)
			for (int j = 0; j < G.vertexNumber; j++) {
				G.matrix[i][j] = 0;
			}

		cout << "请输入图的顶点和边之间的连通性信息以及边的权值:\n";
		for (int i = 0; i < G.arcNumber; i++) {
			cin >> v1 >> v2 >> weight;
			int rowLoc = locateVertex(G, v1);
			int columnLoc = locateVertex(G, v2);
			G.matrix[rowLoc][columnLoc] = weight;
		}; break;

	}


	//print	adjacent matrix
	for (int i = 0; i < G.vertexNumber; i++)
		for (int j = 0; j < G.vertexNumber; j++) {
			cout << G.matrix[i][j] << "\t";
			if (j == G.vertexNumber - 1) cout << "\n";
		}
}

#endif


