#include <bits/stdc++.h>

using namespace std;

int nodes(G g);
int edges(G g);

int first(G g, int v);
int next(G g, int v, int w);
void setEdge(G g, int i, int j, int weight);

int first(G g, int v){ //retorna primeiro vértice com que o vértice v se conecta
    for(int j = 0; j < nodes(g) - 1; j++){
        if(g.matrix[v][j] != 0) return j;
    }
    return nodes(g);
}

int next(G g, int v, int w){ //retorna o primeiro vértice que v se liga depois de w
    for(int j = w + 1; j < nodes(g) - 1; j++){
        if(g.matrix[v][j] != 0) return j;
    }
    return nodes(g);
}

void setEdge(G g, int i, int j, int weight){ //coloca aresta entre os nós i e j com o peso weight
    if(weight == 0) return;

    if(g.matrix[i][j] == 0) g.numEdge++;
    g.matrix[i][j] = weight;
}
