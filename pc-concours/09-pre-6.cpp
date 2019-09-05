#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int co[MAXN][MAXN];
int ti[MAXN][MAXN];

int main() {
    int n, m, a, b;
    cin >> n >> m;

    rep(i, m) {
        rep(j, m) {
            if(i==j) {
                co[i][j] = 0;
                ti[i][j] = 0;
            } else {
                co[i][j] = INF;
                ti[i][j] = INF;
            }
        }
    }

    int t, c;
    rep(i, n) {
        cin >> a >> b >> t >> c;
        --a; --b;
        co[a][b] = c;
        co[b][a] = c;
        ti[a][b] = t;
        ti[b][a] = t;
    }

    rep(k, m) {
        rep(i, m) {
            rep(j, m) {
                ti[i][j] = min(ti[i][j], ti[i][k]+ti[k][j]);
                co[i][j] = min(co[i][j], co[i][k]+co[k][j]);
            }
        }
    }

    int K, r;
    cin >> K;
    rep(re, K) {
        cin >> a >> b >> r;
        --a; --b;

        if (r) cout << co[a][b] << endl;
        else cout << ti[a][b] << endl;
    }
}

