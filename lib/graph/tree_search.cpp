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

vector<int> G[MAXV];
/*
struct edge {int to, cost; };
vector<edge> G[MAXV];
*/

void dfs(int v, int p) {
    for(auto e : G[v]) {
        if (e== p) continue;
        /*何らかの条件などを追加して目的の辺をたどる*/
        dfs(e, v);
    }
}

int main() {
    int V, E;
    cin >> V;
    int s, t, w;
    rep(i, V-1) {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }
    int root = 0;
    dfs(root, -1);
}

