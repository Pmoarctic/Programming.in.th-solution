#include<iostream>
#include<algorithm>
using namespace std;

int p[6];
int mx = -1;
int main()
{
    for(int i=0;i<5;i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        p[i] = a+b+c+d;

        mx = max(p[i],mx);
    }

for(int i=0;i<5;i++)
{
    if(p[i] == mx)
    {
        cout << i+1 << " " << mx;
        return 0;
    }
}


}