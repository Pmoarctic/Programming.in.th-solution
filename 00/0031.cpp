#include<bits/stdc++.h>
using namespace std;

int cut(int num)
{
    int cnt=0;
    while(num/2 != 1)
    {
        num/=2;
        cnt++;
    }
    if(num/2==1)
    {
        return cnt+1;
    }
    return cnt;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    cout << cut(a) + cut(b) + cut(c);
}
