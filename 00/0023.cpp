#include<iostream>
#include<string>
using namespace std;


int d,m;

int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main ()
{
    cin >> d >> m;
    int sumday = 3; //start on Thursday.

    for(int i=1;i<m;i++)
    {
        sumday += month[i];
    }
    sumday += d-1;

    cout << day[sumday%7];


}

/*
 1  2  3  4  5  6  7
 8  9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31
          1
*/