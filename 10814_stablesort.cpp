#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string>a, pair<int, string>b){
  return a.first<b.first;
}

//stable_sort preserves the relative order of the elements with equivalent values.

int main(){
    int n=0;
    cin>>n;
    vector<pair<int, string>> p(n);
    for (int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    stable_sort(p.begin(),p.end(),compare);
    for(int i=0;i<p.size();i++){
        cout<<p[i].first<<' '<<p[i].second<<'\n';
    }
    return 0;
}