#include<bits/stdc++.h>
using namespace std;


int main()
{
    int cur = 1;
    string str;
    cin >> str;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(cur==1)
        {
            if(str[i]=='A')
            {
                cur++;
            }
            else if(str[i]=='C')
            {
                cur = cur+2;
            }
        }
        else if(cur==2)
        {
            if(str[i]=='A')
            {
                cur--;
            }
            else if(str[i]=='B')
            {
                cur++;
            }
        }
        else if(cur==3)
        {
            if(str[i]=='B')
            {
                cur--;
            }
            else if(str[i]=='C')
            {
                cur = cur-2;
            }
        }
    }
    cout << cur;

}