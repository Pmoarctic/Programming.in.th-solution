#include<bits/stdc++.h>
using namespace std;
int mx = -1;
int cnt[100000];
int n;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        cnt[tmp]++;

        mx = max(mx,cnt[tmp]);
    }

    for(int i=0;i<=10000;i++)
    {
        if(cnt[i] == mx)
        {
            cout << i << " ";
        }
    }

    return 0;
}