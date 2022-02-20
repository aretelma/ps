#include <stdio.h>
#include <stdlib.h>
#define V 4 // number of vertex
#define E 5 //number of edge

typedef struct kruskal {
    int from;
    int to;
    int val;
}KS;


KS graph[E];
int parent[1001];
int MST;
int check;

int compare(const void *a, const void *b)    
{
    KS num1 = *(KS *)a;   
    KS num2 = *(KS *)b;  

    if (num1.val < num2.val)    
        return -1;      
    
    if (num1.val > num2.val)   
        return 1;   

    return 0;    
}

int find(int u){
    if(u==parent[u]){
        return u;
    }
    return parent[u]=find(parent[u]);
}

void union_set(int u, int v){
    check=0;
    u=find(u);
    v=find(v);
    if(u==v) return;
    parent[u]=v;
    check=1;
}

int main(){
    for(int i=0;i<=V;i++){
        parent[i]=i;
    }
    for (int i = 0; i < E; i++)
    {
        KS ks;
        scanf("%d %d %d", &ks.from, &ks.to, &ks.val);
        graph[i]=ks;
    }

    qsort(graph,sizeof(graph)/sizeof(KS),sizeof(KS),compare);

    for(int i=0;i<E;i++){
        union_set(graph[i].from,graph[i].to);
        if(check) MST+=graph[i].val;
    }
    printf("MST value is %d", MST);
 
    return 0;
}