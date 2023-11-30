#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second

int m,n;
int k,p;

int dist(pair<int,int> a, pair<int,int> b)
{
    return (abs(a.f-b.f) + abs(a.s-b.s));
}

map< pair<int,int> , vector< pair<int, pair<int,int> > > > adj;
vector<pair< pair<int,int>, pair<int,int> > > v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    cin >> k >> p;

    map<pair<int,int> , int> Dis,tk;
    v.push_back({{0,0},{1,1}});
    for(int i=1;i<=k;i++)
    {
        int y1,x1,y2,x2;
        cin >> y1 >> x1 >> y2 >> x2;


        v.push_back({{y1,x1},{y2,x2}});
        adj[{y1,x1}].push_back({0,{y2,x2}});
    }
    v.push_back({{m,n},{m+1,n+1}});
    

    int len =v.size();
    for(int i=0;i<len;i++)
    {
        tk[v[i].s] = 20;
        tk[v[i].f] = 20;
        Dis[v[i].s] = INT_MAX;
        Dis[v[i].f] = INT_MAX;
        for(int j=0;j<len;j++)
        {
            if(i==j)continue;
            adj[v[i].s].push_back({ dist(v[i].s,v[j].f),v[j].f });
            
        }
    }

    
    queue< pair<int, pair<int,pair<int,int> > > > q;
    q.push({0,{0,{1,1}}});
    Dis[{1,1}] = 0;

    while(!q.empty())
    {
        pair<int, pair<int,pair<int,int> > > tmp = q.front();
        q.pop();
        int curdis = tmp.f;
        int tick = tmp.s.f;
        pair<int,int> pt = tmp.s.s;

        for(auto i : adj[pt])
        {
            int nextdis = i.f;
            pair<int,int> nextpair = i.s;

            int tp=0;
            if(nextdis == 0)
            {
                if(tick+1 > p)
                {
                    continue;
                }
                tp=1;
            }

            if(Dis[nextpair] > curdis + nextdis)
            {
                Dis[nextpair] = curdis + nextdis;
                tk[nextpair] = tick+tp;

                q.push({Dis[nextpair],{tk[nextpair],nextpair}});
            }

        }
    }

    cout << Dis[{m,n}] << " " << tk[{m,n}];

}