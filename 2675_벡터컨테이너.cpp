#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    int t=0,r=0;
    char s[20]={};
    vector <char> p={};
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>r>>s;
        for (int j=0;j<strlen(s);j++){
            for(int k=0;k<r;k++){
                p.push_back(s[j]);
            }
        }
        for(char e:p){
            cout<<e;
        }
        cout<<endl;
        p.clear();
    }
    return 0;
}
