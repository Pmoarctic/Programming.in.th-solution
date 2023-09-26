#include<iostream>
using namespace std;


int n,w,h,mid;


int main()
{
    cin >> n;

    if(n%2==0)
    {
        w = n-1;
        h = n;
        mid = n/2;

        for(int i=1; i<=h/2; i++)
        {
            for(int j=1; j<=w; j++)
            {
                if(mid-(i-1) == j || mid+(i-1) == j)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }

        for(int i=h/2; i>=1; i--)
        {
            for(int j=1; j<=w; j++)
            {
                if(mid-(i-1) == j || mid+(i-1) == j)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }
    }
//////////////////////////////////////////////////////////////////////
    if(n%2==1)
    {
        w = n;
        h = n;
        mid = n/2 + 1;

        for(int i=1; i<=h/2; i++)
        {
            for(int j=1; j<=w; j++)
            {
                if(mid-(i-1) == j || mid+(i-1) == j)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }

        for(int i=1;i<=n;i++)
        {
            if(i==1 || i==n)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;

        for(int i=h/2; i>=1; i--)
        {
            for(int j=1; j<=w; j++)
            {
                if(mid-(i-1) == j || mid+(i-1) == j)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }
    }

}