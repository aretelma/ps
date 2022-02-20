#include <stdio.h>

int d[1000][1000];
int n, m;//n: 노드의 개수, m: 간선의 개수
int c[1000]={0,};
int k=0;
void Init()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			d[i][j] = 0; 
}

void Floyd()
{
	for (int m = 1; m <= n; m++) {//가운데 노드
		for (int s = 1; s <= n; s++) {//시작 노드
			for (int e = 1; e <= n; e++){//마지막 노드
            if(s==e) continue;// 경로 상 중복되는 노드가 있으면 더해주지 않음. 구현 필요.
                d[s][e]=d[s][e]+(d[s][m]*d[m][e]);
            }
        }
    }
				
}

int main()
{
	Init(); //d의 모든 값을 0으로 초기화
    d[1][1]=0;
    d[1][2]=3;
    d[1][3]=2;

    d[2][1]=0;
    d[2][2]=0;
    d[2][3]=3;

    d[3][1]=2;
    d[3][2]=0;
    d[3][3]=0;

n=3;
	Floyd();

	for (int i = 1; i <= n; i++)
		for(int j=1; j<=n; j++)
			printf("d from %d to %d: %d\n", i, j, d[i][j]);
}

/*
d[1][1]=0;
d[1][2]=1;
d[1][3]=0;
d[1][4]=1;

d[2][1]=0;
d[2][2]=0;
d[2][3]=1;
d[2][4]=0;

d[3][1]=1;
d[3][2]=0;
d[3][3]=0;
d[3][4]=1;

d[4][1]=0;
d[4][2]=0;
d[4][3]=0;
d[4][4]=0;
*/