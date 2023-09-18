#include<iostream>
#include<algorithm>
using namespace std;

int mx(int a,int b)
{
    return a>b?b:a;
}


string ad = "ABC";//4
string br = "BABC";//4
string go = "CCAABB";//4
int sc[3];

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    for(int i=0;i<n;i++)
    {
        if(str[i] == ad[i%3])
        {
            sc[0]++;
        }
        if(str[i] == br[i%4])
        {
            sc[1]++;
        }
        if(str[i] == go[i%6])
        {
            sc[2]++;
        }
    }
    int mx = max(sc[0],max(sc[1],sc[2]));

    cout << mx << endl;
    if(sc[0] == mx)cout << "Adrian\n";
    if(sc[1] == mx)cout << "Bruno\n";
    if(sc[2] == mx)cout << "Goran\n";


}