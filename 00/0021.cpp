#include<iostream>
#include<string>
using namespace std;

bool isVovel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return true;
    }
    else return false;
}

int main()
{
    string str;
    getline(cin, str);

    for(int i=0;str[i]!= NULL;)
    {
        if(isVovel(str[i]))
        {
            cout << str[i];
            i += 3;
        }
        else
        {
            cout << str[i];
            i++;
        }
    }
    //zepelepenapa papapripikapa
}