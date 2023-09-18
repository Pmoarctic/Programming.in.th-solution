#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int mn = a<b?a:b;

    for(int i=mn;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout << i;
            return 0;
        }
    }
}