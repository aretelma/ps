#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    for (int i=1;i<n;i++){
        if(n==i+i/1000000+(i/100000)%10+(i/10000)%10+(i/1000)%10+(i/100)%10+(i/10)%10+i%10){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;

}