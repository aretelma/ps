#include <iostream>
#include <string>
//using namespace std;

int char_cnt(std:: string s,char c){
    int i=0;
    for (char e:s){
        if(e==c)i++;
    }
    return i;
}

int main(){
    int a[26]={0};
    int maxVal=0,c=0,k=65,index=0;
    std::string s;
    std::cin>>s;
     for (int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);

    }
    for (int i=0;i<26;i++){
        a[i]=char_cnt(s,'a'+(char)i);
    }
    maxVal=a[0];
    for(int i=0;i<26;i++){
        maxVal=std::max(maxVal,a[i]);
    }
    for(int i=0;i<26;i++){
        if(a[i]==maxVal)c++;
        if(c>1){std::cout<<'?';
            break;
        }
        else if(c==1){
            if(index>0)continue;
            index++;
            k+=i;
        }
    }
    if(!(c>1))std::cout<<(char)toupper(k);
    return 0;
}

/* simple code
#include <iostream>
using namespace std;

int main(void) {
    int max = 0, idx = 0, arr[26] = {0,};
    string S;
    const string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
    cin>>S;
    for(int i = 0; i < S.length(); i++){
        S[i] = toupper(S[i]);
        arr[a.find(S[i])]++;
    }
    for(int j = 0; j < sizeof(arr)/sizeof(int); j++){
        if(arr[j] == 0)
            continue;
        if(max == arr[j]){
            idx = 26;
            continue;
        }
        if(max < arr[j]){
            max = arr[j];
            idx = j;
        }
    }
    cout<<a[idx];
}*/