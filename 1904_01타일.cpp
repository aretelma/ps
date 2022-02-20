#include <iostream>
using namespace std;

int fib[1000001]={0};

int fibo(int n){
    if(n<=3)return n;
    else if(fib[n]!=0){
        return fib[n];
    }
    fib[n]=(fibo(n-2)+fibo(n-1))%15746;
    //n번째는 n-1번째의 맨뒤(혹은 맨앞)에 1을 붙인것과 n-2번째의 맨뒤에 00을 붙인것의 개수합
    //피보나치와 같은 수열
    return fib[n];
}

int main(){
    int n=0;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
