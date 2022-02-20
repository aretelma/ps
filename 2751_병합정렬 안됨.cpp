#include <iostream>
#include <vector>
using namespace std;

vector <int> sorted={};

void merge(int* arr, int start, int mid, int end){
    int i=start, j=mid+1;
    while(i<=mid&&j<=end){
        if(arr[i]<=arr[j]){
            sorted.push_back(arr[i]);
            i++;
        }
        else {
            sorted.push_back(arr[j]);
            j++;
        }
    }
    if(i<=mid)   for (i;i<=mid;i++)sorted.push_back(arr[i]);
    else for(j;j<=end;j++)sorted.push_back(arr[j]);
    for(int t=start;t<=end;t++){
        arr[t]=sorted[t];
    }
}

void merge_sort(int* arr, int start, int end){
    if(start<end){
        int mid=(start+end)/2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int temp=0,n=0;
    scanf("%d",&n);
    int arr[n]={};
    for (int i=0;i<n;i++){
        scanf("%d",&temp);
        arr[i]=temp;
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}