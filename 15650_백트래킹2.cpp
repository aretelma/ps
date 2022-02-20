#include <iostream>
#include <algorithm>
using namespace std;

int n=0,m=0;
int res[10],cnt[10]={0};

void dfs(int len){
    if(len==m){
        for(int i=0;i<m;i++){
            if(i!=0&&res[i-1]>res[i])return;
        }
        for(int e:res){
            if(!e)continue;
            cout<<e<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=1;i<=n;i++){
        if(cnt[i])continue;
        cnt[i]++;
        res[len]=i;
        dfs(len+1);
        cnt[i]=0;
    }
}

int main(){
    int len=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cnt[i]++;
        res[0]=i;
        dfs(len);
        cnt[i]=0;
    }
    return 0;

}