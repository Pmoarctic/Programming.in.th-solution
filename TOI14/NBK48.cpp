#include<bits/stdc++.h>
using namespace std;

int n,q;

int arr[100010];

int main()
{

    cin >> n >> q;
    int tmp;
    for(int i=1;i<=n;i++)
    {
        cin >> tmp;
        arr[i] += tmp + arr[i-1];
    }

    for(int i=n-1;i>=1;i--)
    {
        if(arr[i] > arr[i+1])
        {
            arr[i] = arr[i+1];
        }
    }

    while(q--)
    {
        int p;
        cin >> p;
        int l=1,r=n+1;
        while (l < r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] <= p) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    cout << l-1<< "\n";
    }

}