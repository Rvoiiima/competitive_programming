#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 220
#define MAXV 1000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

vector<ll> G[MAXV];

/*
struct edge {int to, cost; };
vector<edge> G[MAXV];
*/

ll c[MAXN];

int main() {
    int V, E, Q;
    cin >> V >> E >> Q;
    rep(i, E) {
        int s, t;
        cin >> s >> t;
        s--;t--;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    rep(i, V) {
        cin >> c[i];
    }

    ll tmp, x, y;

    rep(i, Q) {
        cin >> tmp >> x;
        x--;
        cout << c[x] << endl;
        if (tmp == 1) {
            
            for (auto i : G[x]) {
                c[i] = c[x];
            }
        } else {
            cin >> y;
            c[x] = y;
        }
    }
}

