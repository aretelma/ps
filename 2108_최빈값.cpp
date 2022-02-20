#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

double average(int* p, int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }
    return sum/n;
}

int mid(int*p , int n){
    sort(p,p+n);
    return p[(n-1)/2];
}

int mode(int *p,int n){
    int c[8001]={0};
    int temp=0,max=0,mode=0;
    bool isSecond=false;
    for(int i=0;i<n;i++){
        temp=(p[i]<=0)? abs(p[i]):p[i]+4000;
        c[temp]++;
        if(c[temp] > max)max = c[temp];
    }
    sort(p, p+n);
    for(int i = -4000; i < 4001; i++){
        temp = i <= 0 ? abs(i) : i+4000;
        if(c[temp] == max){
            mode = i;
            if(isSecond)
                break;
            isSecond = true;
        }
    }
    return mode;
}

int gap(int *p, int n){
    sort(p,p+n);
    return p[n-1]-p[0];
}

int main(){
    int n=0;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("%.0lf\n%d\n%d\n%d",average(p,n),mid(p,n),mode(p,n),gap(p,n));
    free(p);
    return 0;
}
