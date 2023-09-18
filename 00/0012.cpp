#include<iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
///////////////////
    for(int i=1;i<=len;i++)
    {
        if(i%3==0)
        {
            cout << "..*.";
        }
        else
        {
            cout << "..#.";
        }
    }
    cout << ".\n";

    for(int i=1;i<=len;i++)
    {
        if(i%3==0)
        {
            cout << ".*.*";
        }
        else
        {
            cout << ".#.#";
        }
    }
    cout << ".\n";
///////////
    for(int i=1;i<=len;i++)
    {
        if(i%3==0 ||(i%3==1 && i!=1))
        {
            printf("*.%c.",str[i-1]);

        }
        else
        {
            printf("#.%c.",str[i-1]);
        }
    }
    if(len%3==0)
    {
        printf("*\n");
    }
    else
    {
        printf("#\n");
    }
///////////////
    for(int i=1;i<=len;i++)
    {
        if(i%3==0)
        {
            cout << ".*.*";
        }
        else
        {
            cout << ".#.#";
        }
    }
    cout << ".\n";

    for(int i=1;i<=len;i++)
    {
        if(i%3==0)
        {
            cout << "..*.";
        }
        else
        {
            cout << "..#.";
        }
    }
    cout << ".\n";
}