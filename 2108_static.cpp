#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int numpool[8001] = {0,};
    vector<int> v;
    int mean = 0, middle, range;
    int freq_val = 0;
    int freq = -1;
    bool second = false;

    scanf("%d", &n);
    for(int i=0; i<n;i++)
    {
        int t=0;
        scanf("%d", &t);
        numpool[t+4000]++;
        mean += t;
        v.push_back(t);
    }
    
    sort(v.begin(), v.end());
    middle = v.at((v.size()-1)/2);
    range = v.back() - v.front();

    for (int i =0; i<8001; i++)
    {
        if(numpool[i] == 0) continue;
        if(numpool[i] == freq)
        {
            if(second)
            {
                freq_val = i - 4000;
                second = false;
            }
        }
        if(numpool[i]>freq)
        {
            freq = numpool[i];
            freq_val = i - 4000;
            second = true;
        }
    }
    mean = round((float)mean/n);
    printf("%d\n", mean);
    printf("%d\n", middle);
    printf("%d\n", freq_val);
    printf("%d\n", range);
}