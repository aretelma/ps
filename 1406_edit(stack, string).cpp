#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*int main()
{
    int n = 0, m = 0;
    string fstr;
    getline(cin, fstr);
    cin >> m;
    int cursor = fstr.length();
    while(m--)
    {   
        char inst;
        string temp;
        cin >> inst;
        if(inst == 'L')
        {   
            if (cursor == 0) continue;
            cursor --;
        }
        if(inst == 'P')
        {   
            cin >> temp;
            fstr.insert(cursor, temp);
            cursor ++;
        }
        if(inst == 'B')
        {   
            if (cursor == 0) continue;
            cursor --;
            fstr.erase(cursor, 1);
        }
        if(inst == 'D')
        {
            if (cursor == fstr.length()) continue;
            cursor ++;
        }
    }
    cout << fstr;
}
*/ // STL string 

int main()
{
    int m = 0;
    string fstr;
    getline(cin, fstr);
    cin >> m;
    stack<char> curl;//커서 왼쪽
    stack<char> curr;//커서 오른쪽
    for(auto &i:fstr) curl.push(i);//문자열 제일 끝에 커서 위치
    while(m--)
    {   
        char inst;
        char temp;
        cin >> inst;
        if(inst == 'L')
        {   
            if (curl.empty()) continue;
            curr.push(curl.top());
            curl.pop();
        }// 커서 한칸 왼쪽으로
        if(inst == 'P')
        {   
            cin >> temp;
            curl.push(temp);
        }// 커서 왼쪽 끝에 문자 하나 추가
        if(inst == 'B')
        {   
            if (curl.empty()) continue;
            curl.pop();
        }// 커서 왼쪽 끝 문자 하나 삭제
        if(inst == 'D')
        {
            if (curr.empty()) continue;
            curl.push(curr.top());
            curr.pop();
        }// 커서 한칸 오른쪽으로 
    }
    while(!(curl.empty()))
    {
        curr.push(curl.top());
        curl.pop();
    }// 커서 왼쪽 문자열 다 커서 오른쪽으로
    while(!(curr.empty()))
    {
        cout << curr.top();
        curr.pop();
    }// 커서 오른쪽 문자열 출력
}