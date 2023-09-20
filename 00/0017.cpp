#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<4;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+4);
    
    //math reason;
    cout << arr[0] * arr[2];
}