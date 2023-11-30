#include<bits/stdc++.h>
using namespace std;

struct POINT
{
    int y1,x1,y2,x2;
};

int m,n,k,p;
POINT dest,port[20010];

int dist(POINT a, POINT b)
{
    return (abs(a.y2 - b.y1) + abs(a.x2 - b.x1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> k >> p;
    port[0] = {1,1,1,1};
    dest = {m,n,m,n};
    for(int i=1;i<=k;i++)
    {
        cin >> port[i].y1 >> port[i].x1 >> port[i].y2 >> port[i].x2;
    }
    
    int mn = INT_MAX;
    int t;

    int d[20][20010];
    for(int i=1;i<=k;i++)
    {
        d[1][i] = dist(port[0],port[i]);
        if(mn > d[1][i] + dist(port[i],dest))
        {
            mn = d[1][i] + dist(port[i],dest);
            t = 1;
        }
    }

    for(int T=2;T<=p;T++)
    {
        for(int i=1;i<=k;i++)
        {
            d[T][i] = INT_MAX;
            for(int j=1;j<=k;j++)
            {
                d[T][i] = min(d[T][i] , d[T-1][j] + dist(port[j],port[i]));
            }

            if(mn > d[T][i] + dist(port[i],dest))
            {
                mn = d[T][i] + dist(port[i],dest);
                t = T;
            }
        }
    }

    cout << mn << " " << t;





    return 0;
}