#ifndef GRAFO_H
#define GRAFO_H

#define MAX_NUM_VERTICES 100 
#define SEM_ARESTA 0

typedef int elem;
typedef struct grafo Grafo;

Grafo *criar_grafo(int *n, int *erro, int *direcionado);
void apagar_grafo(Grafo *G, int *erro);
void inserir_aresta(Grafo *G, int *v1, int *v2, elem *n, int *erro);
elem retirar_aresta(Grafo *G, int *v1, int *v2, int *erro);
int verificar_aresta(Grafo *G, int *v1, int *v2, int *erro);
void imprimir_grafo(Grafo *G);

Grafo *grafo_transposto(Grafo *G, int *erro);
int lista_adj_vazia(Grafo *G, int *v, int *erro);
int primeiro_lista_adj(Grafo *G, int *v, int *erro);
void prox_adj(Grafo *G, int *v, int *adj, elem *p, int *prox, int *fim_lista_adj, int *erro);

elem aresta_menor_peso(Grafo *G, int *erro);
int grau_vertice(Grafo *G, int *v);

void DFS(Grafo *G, int *vertice, int *verticeVisitado, int numVertices, int arestaVisitada[][numVertices]);
int visitouTodos(Grafo *G, int *verticeVisitado);
int ePonte(Grafo *G, int *vOrigem, int *vDestino, int verticeVisitado[], int numVertices, int arestaVisitada[][numVertices]);


#endif