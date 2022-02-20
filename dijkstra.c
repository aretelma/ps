#include <stdio.h>
#include <limits.h> //to use INT_MAX

#define V 5 //number of vertex
int graph[V][V]; //given graph
int D[V]; //shortest distance
 
 
int minDistance(int D[V], int V_S[V])
{
    int min = INT_MAX;
    int index;
 
    for (int v = 0; v < V; v++)
    {
        if (!V_S[v] && min > D[v])
        {
            index = v;
            min = D[v];
        }
    }
 
    return index;
}
 
 
void dijkstra(int graph[V][V], int src, int D[V])
{
    int V_S[V]; // check visited or not
    for (int i = 0; i<V; i++)
        D[i] = INT_MAX, V_S[i] = 0;
        D[src] = 0;
    // except source node 
    for (int c = 0; c < V - 1; c++)
    {
        // get shortest distance
        int u = minDistance(D, V_S);
 
        for (int v = 0; v < V; v++)
        {
            if (!V_S[v] && graph[u][v] && D[u] != INT_MAX && D[v] > D[u] + graph[u][v])
            {
                //update shortest path
                D[v] = D[u] + graph[u][v];
            }
        }
        V_S[u] = 1;
    }
}
 
int main()
{
    // given graph
    graph[0][0]=0;
    graph[0][1]=3;
    graph[0][2]=6;
    graph[0][3]=8;
    graph[0][4]=7;

    graph[1][0]=3;
    graph[1][1]=0;
    graph[1][2]=2;
    graph[1][3]=4;
    graph[1][4]=8;

    graph[2][0]=6;
    graph[2][1]=2;
	graph[2][2]=0;
    graph[2][3]=5;
    graph[2][4]=5;
	
	graph[3][0]=8;
    graph[3][1]=4;
	graph[3][2]=5;
    graph[3][3]=0;
    graph[3][4]=2;

    graph[4][0]=7;
    graph[4][1]=8;
	graph[4][2]=5;
    graph[4][3]=2;
    graph[4][4]=0;
	
	

    dijkstra(graph, 0, D);
    for (int i = 0; i < V; i++)//print shortest distance
        printf("distance from 0 to %d is %d\n", i, D[i]);
    return 0;
}
