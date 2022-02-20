#include <iostream>

using namespace std;
unsigned long long fibo[41]={0};

unsigned long long fib(int n) {
    if(n==0){
        fibo[0]=0;
        return 0;
    }
    else if(n==1){
        fibo[1]=1;
        return 1;
    }
    else if(fibo[n]!=0) return fibo[n];
    fibo[n]=fib(n-1)+fib(n-2);
    return fibo[n];
}

int main(){
    int t=0,n=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n == 0){ printf("%d %d\n",1,0); }
        else if(n == 1){ printf("%d %d\n",0,1);}
        else {
            fib(n);
            printf("%llu %llu\n",fibo[n-1],fibo[n]);
        }
    }
    return 0;
}
