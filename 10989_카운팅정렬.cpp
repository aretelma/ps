#include <iostream>

using namespace std;

    int count[10001]={0};

int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        count[temp]++;
    }
    for(int i=0; i<10001; i++){ 
        if(count[i] != 0){
            for(int j=0; j<count[i]; j++) { 
                printf("%d ", i); 
            } 
        } 
    }
    
    return 0;
}