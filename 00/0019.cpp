#include<bits/stdc++.h>

using namespace std;


int n;

int bit[10000],sou[10000];

int mn=INT_MAX;

void perket(int N,int sour,int bitter)
{
    if(n==N)
    {
        if(bitter>0)mn = min(mn,abs(sour-bitter));
    }
    else
    {
        perket(N+1, sour*sou[N], bitter+bit[N]);//choose;
        perket(N+1, sour, bitter);//not choose;
    }
}



int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> sou[i] >> bit[i];
    }

    perket(0,1,0);
    cout << mn;
}