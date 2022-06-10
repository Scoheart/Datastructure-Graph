#ifndef _menu_h
#define _menu_h

#include <stdlib.h>
#include <iostream>
using namespace std;

#include "_createGraph.h"
#include "_destoryGraph.h"
#include "_locateVertex.h"
#include "_getVertex.h"
#include "_putVertex.h"
#include "_firstAdjacentVertex.h"
#include "_nextAdjacentVertex.h"
#include "_insertVertex.h"
#include "_deleteVertex.h"
#include "_insertArc.h"
#include "_deleteArc.h"
#include "_DFSTraverse.h"
#include "_BFSTraverse.h"
#include "_miniSpanTree.h"
#include "_showGraph.h"

void menu() {
	system("cls");
	cout << "\n\t\t\t|---------------------------Graph------------------------------|";
	cout << "\n\t\t\t|                     1. cerateGarph                           |";
	cout << "\n\t\t\t|                     2. destroyGraph                          |";
	cout << "\n\t\t\t|                     3. locateVertex                          |";
	cout << "\n\t\t\t|                     4. getVertex                             |";
	cout << "\n\t\t\t|                     5. putVertex                             |";
	cout << "\n\t\t\t|                     6. firstAdjacentVertex                   |";
	cout << "\n\t\t\t|                     7. nextAdjacentVertex                    |";
	cout << "\n\t\t\t|                     8. insertVertex                          |";
	cout << "\n\t\t\t|                     9. deleteVertex                          |";
	cout << "\n\t\t\t|                     10. insertArc                            |";
	cout << "\n\t\t\t|                     11. deleteArc                            |";
	cout << "\n\t\t\t|                     12. DFSTraverse                          |";
	cout << "\n\t\t\t|                     13. BFSTraverse                          |";
	cout << "\n\t\t\t|                     14. miniSpanTree                         |";
	cout << "\n\t\t\t|                     15. showGraph                            |";
	cout << "\n\t\t\t|                     0. exit                                  |";
	cout << "\n\t\t\t|--------------------------------------------------------------|";
	cout << "\nPLEASE COMFIRM YOUR OPTIONS(ENTER 0-7):";

	int option;
	cin >> option;
	while (option)
	{
		switch (option) {

			//创建图
		case 1:
			creat_matirxGraph(G);
			; break;

		case 2:
			destroyGraph(G);
			; break;

			//定位顶点位置
		case 3:
			char vertex;
			cout << "请输入要查询的顶点\n";
			cin >> vertex;
			if (locateVertex(G, vertex) >= 0)
				cout << "顶点在图中的位置是" << locateVertex(G, vertex) << "\n";
			else
				cout << "没有这个顶点";
			; break;

		case 4:
			int getNumber;
			cout << "请输入要查询的顶点序号\n";
			cin >> getNumber;
			cout << "查询的顶点为 顶点 " << getVertex(G, getNumber) << "\n";
			; break;

		case 5:
			int number;
			char value;
			cout << "请输入要赋值的顶点序号以及其赋值:\n";
			cin >> number >> value;
			putVertex(G, number, value);
			; break;

		case 6:
			char firstName;
			cout << "请输入要查询的顶点名称\n";
			cin >> firstName;
			firstAdjacentVertex(G, firstName);
			; break;

		case 7:
			char nextVertex, vertexName;
			cout << "请输入要查询的顶点名称以及它的一个邻接顶点名称\n";
			cin >> vertexName >> nextVertex;
			nextAdjacentVertex(G, vertexName, nextVertex);
			; break;

		case 8:
			char newVertex;
			cout << "请输入要插入的新顶点的信息\n";
			cin >> newVertex;
			insertVertex(G, newVertex);
			; break;

		case 9:
			char deleteVertexName;
			cout << "请输入要删除的顶点的信息\n";
			cin >> deleteVertexName;
			deleteVertex(G, deleteVertexName); break;

		case 10:
			char insertArcV, insertArcW;
			cout << "请输入要插入的边的弧尾和弧头\n";
			cin >> insertArcV >> insertArcW;
			insertArc(G, insertArcV, insertArcW);
			; break;

		case 11:
			char deleteArcV, deleteArcW;
			cout << "请输入要删除的边的弧尾和弧头\n";
			cin >> deleteArcV >> deleteArcW;
			deleteArc(G, deleteArcV, deleteArcW);
			; break;

		case 12:
			cout << "请输入顶点名称\n";
			char DFSTvex;
			cin >> DFSTvex;
			InitVsitied(visitied);
			DFSTraverse(G, locateVertex(G, DFSTvex));
			; break;

		case 13:
			cout << "请输入顶点名称\n";
			char BFSTv;
			cin >> BFSTv;
			BFSTraverse(G, BFSTv);
			; break;

		case 14:
			miniSpanTree(G);
			; break;

		case 15: showGraph(); ; break;

		default:; break;
		}
		system("pause>nul");
		menu();
		cin >> option;
	}
	if (option == 0) {
		printf("EXITED, THANKS!");
		return;
	}
}

#endif