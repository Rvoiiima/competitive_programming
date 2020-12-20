#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define MAXV 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


struct edge {int to, cost; };
vector<edge> G[MAXV];

int color[MAXV];

void dfs(int v, int p, int c) {
    color[v] = c;
    for(auto e : G[v]) {
        if (e.to == p) continue;
        if (e.cost & 1) dfs(e.to, v, 1-c);
        else dfs(e.to, v, c);
    }
}

int main() {
    int V, E;
    cin >> V;
    int s, t, w;
    rep(i, V-1) {
        cin >> s >> t >> w;
        --s; --t;
        G[s].push_back(edge{t, w});
        G[t].push_back(edge{s, w});
    }
    int root = 0;
    dfs(root, -1, 1);

    rep(i, V) cout << color[i] << endl;
}

