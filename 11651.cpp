#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main(){
    vector<pair<int,int>> p;
    pair<int, int> temp;
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp.first);
        scanf("%d",&temp.second);
        p.push_back(pair<int,int>(temp.second,temp.first));
    }
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        printf("%d %d\n",p[i].second, p[i].first);
    }
    return 0;
}