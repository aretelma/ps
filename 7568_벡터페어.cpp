#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=0,a=0,b=0,c=1;
    vector<pair<int,int>> p={};
    vector<int> q={};
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        p.push_back(make_pair(a,b));
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(p[i].first<p[j].first&&p[i].second<p[j].second){
                c++;
            }
        }
        q.push_back(c);
            c=1;
    }   
    for(int e:q)printf("%d ",e);
    return 0;
}