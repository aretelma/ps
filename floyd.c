#include <stdio.h>
#define INF 1<<20

int d[1000][1000];
int n; //number of vertex

void Init()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if(i!=j) d[i][j] = INF; 
}

void Floyd()
{
	for (int k = 1; k <= n; k++) 
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= n; j++)
				if (d[i][j] > d[i][k] + d[k][j]){
					d[i][j] = d[i][k] + d[k][j]; 
				}
}

int main()
{
	n=4;
	Init();
	d[1][1]=0;
    d[1][2]=3;

    d[2][1]=2;
    d[2][2]=0;

    d[3][2]=7;
    d[3][3]=0;
	d[3][4]=1;
	
	d[4][1]=6;
	d[4][4]=0;


	Floyd();

	for (int i = 1; i <= n; i++)
		for(int j=1; j<=n; j++)
			printf("distance from %d to %d: %d\n", i, j, d[i][j]);
}