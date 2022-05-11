#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int pack = 1001, one = 1001;
    scanf("%d %d", &n, &m);
    while(m--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(pack > a)
        {
            pack = a;
        }
        if(one > b)
        {
            one = b;
        }
    }
    printf("%d", min((n/6+1)*pack, min(n/6*pack + n%6*one, n*one)));
}