#include<bits/stdc++.h>
using namespace std;


int main()
{
    string n;
    cin >> n;
    int sum3 = 0;
    int sum11 = 0;
    int len = n.length();
    for(int i=0;i<len;i++)
    {
        sum3 += n[i]-'0';
        sum11 = ((sum11*10)+n[i]-'0') % 11;
    }

    cout << sum3%3 << " " << sum11%11;

}