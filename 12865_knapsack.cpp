#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int ans[100][100001];
 
int main(){
    int n,k;
    cin>>n>>k;
    int v[n],w[n];
    int t[n+1][k+1];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        w[i]=a;
        v[i]=b;
    }
    for(int j=1;j<=k;j++) t[0][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(w[i]<=j){
                t[i][j]=max(t[i-1][j-w[i-1]]+v[i-1],t[i-1][j]);
            }
            else t[i][j]=t[i-1][j];
        }
    }
    cout<<t[n][k];
    return 0;
}
