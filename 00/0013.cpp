#include<bits/stdc++.h>

using namespace std;

int dw[10];

int main()
{
    int sum =0;
    for(int k=0;k<9;k++)
    {
        cin >> dw[k];
        sum += dw[k];
    }


    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(sum - dw[i] - dw[j] == 100)
            {
                dw[i] = -1;
                dw[j] = -1;
            }
        }
    }

    for(int i=0;i<9;i++)
    {
        if(dw[i]==-1)
        {
            continue;
        }
        cout << dw[i] << endl;
    }

    return 0;
}