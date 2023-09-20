#include<iostream>
using namespace std;

bool arr[2000] = {};
int n,k,ans=-1,flag=0;

void sieve(int p)
{
    for(int i=p;i<=n;i+=p)
    {
        if(arr[i] == false)
        {
            arr[i] = true;
            k--;
        }
        if(k==0)
        {
            cout << i;
            flag = 1;
            return;
        }
    }
}

int main()
{
    cin >> n >> k;

    for(int i=2;i<=n;i++)
    {
        if(arr[i] == false)
        {
            sieve(i);
        }
        if(flag == 1)
        {
            return 0;
        }
    }

    cout << ans;
}