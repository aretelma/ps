#include <iostream>
#include <algorithm>
using namespace std;

string board[50];//stirng 배열~~char 2D 배열
int n,m;
string black[8] = {

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" }

};

string white[8] = {

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" }

};
int whitecomp(int x, int y){
    int c=0;
    for(int i=x;i<x+8;i++){
        for(int j=y;j<y+8;j++){
            if(board[i][j]!=white[i-x][j-y]) c++;
        }
    }
    return c;
}
int blackcomp(int x, int y){
    int c=0;
    for(int i=x;i<x+8;i++){
        for(int j=y;j<y+8;j++){
            if(board[i][j]!=black[i-x][j-y]) c++;
        }
    }
    return c;
}
int main(){
    int res=0;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>board[i];
    }
    res=9999999999;
    for(int i=0;i+7<n;i++){
        for(int j=0;j+7<m;j++){
            res=min(res,min(whitecomp(i,j),blackcomp(i,j)));
        }
        
    }
    cout<<res;
    return 0;
}
