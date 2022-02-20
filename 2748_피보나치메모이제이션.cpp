#include <iostream>
using namespace std;

unsigned long long fib[100]={0};

unsigned long long fibo(int n){
    if(n<=1)return n;
    else if(fib[n]!=0){
        return fib[n];
    }
    fib[n]=fibo(n-2)+fibo(n-1);
    return fib[n];
}

int main(){
    int n=0;
    scanf("%d",&n);
    printf("%llu",fibo(n));
    return 0;
}