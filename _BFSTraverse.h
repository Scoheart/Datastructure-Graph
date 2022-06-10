#ifndef _BFSTraverse_h
#define _BFSTraverse_h
#include "_struct.h"
#include "_locateVertex.h"
#include "_getVertex.h"


typedef struct listint {
    int x;
    struct listint* nextlist;
}listint;
void BFSTraverse(matirxGraph G, char v)
{

    int b[20] = { 0 };
    int i = 0;
    int a;
    a = locateVertex(G, v);
    b[a] = 1;
    printf("%c", v);
    listint* head, * ends, * d;
    listint A, B;
    head = &A;
    ends = NULL;
    int k = 0;

    for (i = 0; i < G.vertexNumber; i++)
        if (G.matrix[a][i] != 0)
        {
            printf("%c", getVertex(G, i));
            b[i] = 1;
            if (k == 0) {
                ends = (listint*)malloc(sizeof(int));
                head->nextlist = ends;
                k++;
                ends->x = i;
                ends->nextlist = NULL;
                k++;
            }
            else
            {
                d = (listint*)malloc(sizeof(int));
                d->x = i;
                d->nextlist = NULL;
                ends->nextlist = d;
                ends = d;
            }
        }


    int g;
    d = head->nextlist;
    while (head->nextlist != NULL)
    {
        head = head->nextlist;
        g = head->x;
        for (i = 0; i < G.vertexNumber; i++)
        {
            if (G.matrix[g][i] != 0)
                if (b[i] != 1)
                {
                    printf("%c", getVertex(G, i));
                    b[i] = 1;
                    ends = (listint*)malloc(sizeof(int));
                    ends->x = i;
                    ends->nextlist = NULL;
                    ends = ends->nextlist;
                }

        }

    }

    while (d != NULL)
    {
        head = d->nextlist;
        free(d);
        d = head;
    }
    head = &A;
}

#endif