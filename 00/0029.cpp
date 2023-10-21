#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >>m;
    if(n > m)
    {
        cout << 2;
    }
    else if(m%n == 0)
    {
        cout << m/n;
    }
    else
    {
        cout << m/n +1;
    }
}