#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char *argv[]){
    queue<int> q;
    int N = 0;
    int temp = 0;
    cin>>N;
    for (int i=1; i<=N; i++){
        q.push(i);
    }
    while(q.size()>1){
        q.pop();
        temp = q.front();
        q.push(temp);
        q.pop();
    }
    cout<<q.front();
}