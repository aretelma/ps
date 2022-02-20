#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// 오늘의 교훈: sort는 string 배열 정렬시 element의 길이는 상관하지 아니함.^^

bool compare(string a, string b){
  if(a.length() == b.length())
    return a<b;//길이가 같으면 사전순
  return a.length()<b.length();//길이가 다르면 길이순 
}


int main(){
    int n=0;
    string temp;
    vector <string> p={};
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        getline(cin,temp);
        p.push_back(temp);
    }
    sort(p.begin(),p.end(),compare);
    for(int i=0;i<n;i++){
        if(i!=0&&p[i-1]==p[i])continue;
        else    cout<<p.at(i)<<endl;
    }
    return 0;
}