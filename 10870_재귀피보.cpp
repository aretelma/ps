#include <iostream>
using namespace std;

int fib(int n){
    if(n==0)return 0;
    else if(n==1)return 1;
    else if(n>=2&&n<=20){
        return fib(n-1)+fib(n-2);
    }
    else return -1;
}

int main(){
    int a=0;
    cin>>a;
    cout<<fib(a);
    return 0;
}
