#include<bits/stdc++.h>
using namespace std;

struct TEAM
{
    string name;
    int score =0;
    int dif   =0;
    int shot  =0;
};

bool compare(TEAM a,TEAM b)
{
    if(a.score == b.score)
    {
        if(a.dif == b.dif)
        {
            return a.shot > b.shot;
        }
        else
        {
            return a.dif > b.dif;
        }
    }
    else
    {
        return a.score > b.score;
    }
}

TEAM team[4];

int main()
{
    for(int i=0;i<4;i++)
    {
        string nam;
        cin >> nam;
        team[i].name = nam; 
    }

    int arr[5][5];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)continue;

            if(arr[i][j] > arr[j][i])
            {
                team[i].score += 3;
            }
            else if(arr[i][j] < arr[j][i])
            {
                team[j].score += 3;
            }
            else
            {
                team[i].score += 1;
                team[j].score += 1;
            }

            team[i].dif += (arr[i][j] - arr[j][i]);
            team[j].dif += (arr[j][i] - arr[i][j]);

            team[i].shot += arr[i][j];
            team[j].shot += arr[j][i];
        }
    }

    sort(team,team+4,compare);

    for(int i=0;i<4;i++)
    {
        cout << team[i].name;
        printf(" %d\n",team[i].score/2);
    }
}

/*
Denmark
Netherlands
Cameroon
Japan
0 0 2 1
2 0 2 1
1 1 0 0
3 0 1 0
*/