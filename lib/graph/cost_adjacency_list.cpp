#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define MAXV 1000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

//vector<ll> G[MAXV];

struct edge {int to, cost; };
vector<edge> G[MAXV];

int main() {
    int V, E;
    cin >> V >> E;
    rep(i, E) {
        int s, t, w;
        cin >> s >> t >> w;
        G[s].push_back(edge{s, w});
        G[t].push_back(edge{t, w});
    }

    rep(i, V+1) {
        rep(k, G[i].size()) {
            cout << G[i][k].to << " " << G[i][k].cost << endl;
        }
    }
}

