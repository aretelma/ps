#include <iostream>
using namespace std;

unsigned long long pado[101]={0};

unsigned long long padovan(int n){
    if(n<=2)return 1;
    else if(n>=2&&n<=4)return 2;
    else if(pado[n]!=0){
        return pado[n];
    }
    pado[n]=padovan(n-5)+padovan(n-1);
    return pado[n];
}

int main(){
    int n=0,t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        printf("%llu\n",padovan(n-1));
    }
    return 0;
}