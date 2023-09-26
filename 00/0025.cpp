#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    char c;

    cin >> a >> c >> b;
    
    if(a.length() < b.length())
    {
        string tmp = a;
        a=b;
        b=tmp;
    }

    if(c=='+')
    {
        int idx=1;
        if(a.length() == b.length())
        {
            idx++;
        }

        for(int i=1; i<=a.length(); i++)
        {
            if(i==1 || i == a.length()-b.length()+1 )
            {
                cout << idx;
            }
            else
            {
                cout << 0;
            }
        }
    }
    else
    {
        cout << 1;
        for(int i=2; i<= a.length()+b.length()-1 ;i++)
        {
            cout << 0;
        }
    }
}