#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> arr;
int cnt;
int n;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >>tmp;
        if(tmp==0)
        {
            cnt++;
        }
        else
        {
            arr.push_back(tmp);
        }
    }
    sort(arr.begin(),arr.end());

    cout << arr[0];
    while(cnt--)
    {
        cout << 0;
    }

    for(int i=1;i<arr.size();i++)
    {
        cout << arr[i];
    }
    
}