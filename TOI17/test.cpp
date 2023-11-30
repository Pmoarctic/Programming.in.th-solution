#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

const int INF = INT_MAX;

int m, n;
int k, p;

int dist(pair<int, int> a, pair<int, int> b) {
    return abs(a.f - b.f) + abs(a.s - b.s);
}

map<pair<int, int>, vector<pair<int, pair<int, int>>>> adj;
vector<pair<pair<int, int>, pair<int, int>>> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    cin >> k >> p;

    map<pair<int, int>, int> Dis, tk;

    v.emplace_back(make_pair(0, 0), make_pair(1, 1));
    for (int i = 1; i <= k; i++) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        v.emplace_back(make_pair(y1, x1), make_pair(y2, x2));
        adj[{y1, x1}].emplace_back(0, make_pair(y2, x2));
    }

    v.emplace_back(make_pair(m, n), make_pair(m + 1, n + 1));

    int len = v.size();
    for (int i = 0; i < len; i++) {
        tk[v[i].s] = tk[v[i].f] = 20;
        Dis[v[i].s] = Dis[v[i].f] = INF;

        for (int j = 0; j < len; j++) {
            if (i == j) continue;
            int distance = dist(v[i].s, v[j].f);
            adj[v[i].s].emplace_back(distance, v[j].f);
        }
    }

    queue<pair<int, pair<int, pair<int, int>>>> q;
    q.push({0, {0, {1, 1}}});
    Dis[{1, 1}] = 0;

    while (!q.empty()) {
        auto tmp = q.front();
        q.pop();
        int curdis = tmp.f;
        int tick = tmp.s.f;
        pair<int, int> pt = tmp.s.s;

        for (auto i : adj[pt]) {
            int nextdis = i.f;
            pair<int, int> nextpair = i.s;

            int tp = (nextdis == 0 && tick + 1 > p) ? 0 : 1;

            if (Dis[nextpair] > curdis + nextdis) {
                Dis[nextpair] = curdis + nextdis;
                tk[nextpair] = tick + tp;
                q.push({Dis[nextpair], {tk[nextpair], nextpair}});
            }
        }
    }

    cout << Dis[{m, n}] << " " << tk[{m, n}];
}
