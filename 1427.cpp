#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n=0;
    vector <int> p(10,0);
    cin>>n;
    while(n!=0){
        p.push_back(n%10);
        n=n/10;
    }
    sort(p.begin(),p.end(),greater<int>());
    for(int i=0;i<p.size();i++){
        cout<<p.at(i);
    }
    return 0;
}