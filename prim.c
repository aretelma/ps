#include <stdio.h>
#define INF 1<<20 
 
#define V 7  // number of vertex

 
int graph[V][V] ={
  {0,7,INF,INF,3,10,INF},
  {7,0,4,10,2,6,INF},
  {INF,4,0,2,INF,INF,INF},
  {INF,10,2,0,INF,9,4},
  {3,2,INF,INF,0,INF,5},
  {10,6,INF,9,INF,0,INF},
  {INF,INF,INF,4,5,INF,0}
};
 
int V_S[V]; // check selected or not
int D[V]; // shortest distance

int minVertex(int n)
{
  int v; // vertex data->v
   
  for (int i=0; i < n; i++)
  {
    if (V_S[i] == 0) {
      v = i; 
      break;
    }
  }
 
  // check whether it is shortest or not
  for (int i=0; i < n; i++)
  {
    if (V_S[i] == 0 && (D[i] < D[v]))
      v = i;  // shortest distance vertex
  }
 
  return v; 
}


void Prim(int src, int n){
  int i, u, v;
 
  for (u = 0; u < n; u++)  // Init
  {
    D[u] = INF;
    V_S[u] = 0;
  }
 
  D[src] = 0; 
   
  for (i = 0; i < n; i++)
  {
    // u => shortest Distance vertex
    u = minVertex(n);
    V_S[u] = 1;
 
    // if there is no path , terminate
    if (D[u] == INF) return;
     
    printf("%d ", u); // print visited vertex
 
    for (v = 0; v < n; v++)  
    // update shortest path's Dance
    {
      if (graph[u][v] != INF) // if there is a path from u to v
      {
        if (V_S[v] == 0 && graph[u][v] < D[v]){
          D[v] = graph[u][v]; // update D[v]
        }
      }
    }
  }
}
 
int main()
{
    int c=0;
    Prim(0, V);  
    for(int i=0;i<V;i++){
        c+=D[i];
    }
    printf("\nMST is %d\n",c);
}

