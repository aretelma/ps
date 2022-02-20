#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i='a';i<='z';i++){
        if(s.find_first_of(i)==string::npos)cout<<-1<<' ';
        //string::npos는 -1인데 디폴트는 unsigned int 타입으로 반환됨.
        else cout<<s.find_first_of(i)<<' ';
    }
    return 0;
}
