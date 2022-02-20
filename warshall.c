#include <stdio.h>

int R[1000][1000];
int n; //number of vertex

void Init()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			R[i][j]=0;
}

void Warshall()
{
	for (int k = 1; k <= n; k++) 
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= n; j++){
                R[i][j]=R[i][j]+(R[i][k]*R[k][j]);
                if(R[i][j]>=2)R[i][j]=1;
            }

}

int main()
{
	n=4;
	Init();
    R[1][2]=1;

    R[2][4]=1;
	
	R[4][1]=1;
	R[4][3]=1;


	Warshall();

	for (int i = 1; i <= n; i++)
		for(int j=1; j<=n; j++)
			printf("transitive closure from %d to %d: %d\n", i, j, R[i][j]);
}