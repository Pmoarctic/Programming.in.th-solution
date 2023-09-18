#include<bits/stdc++.h>
using namespace std;

bool flag[43] = {false};
int cnt;

int main()
{
    for(int i=0;i<10;i++)
    {
        int tmp;
        cin >> tmp;
        tmp %= 42;

        if(flag[tmp] == 0)
        {
            flag[tmp] = 1;
            cnt++;
        }
    }

    cout << cnt;
}