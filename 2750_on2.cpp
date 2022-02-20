#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr={};
    int temp=0,n=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(int u=0;u<n;u++){
        for(int p=u;p<n;p++){
            if(arr[u]>arr[p]){
                temp=arr[u];
                arr[u]=arr[p];
                arr[p]=temp;
            }
        }
    }
    for(int e:arr){
        cout<<e<<endl;
    }
    return 0;
}