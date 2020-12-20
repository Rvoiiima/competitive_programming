#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXM 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

ll m, n;
priority_queue<int> pq;
vector<vector <ll> >G(MAXM);
int main() {
    cin >> n >> m;
    ll a, b;
    rep(i,n) {
        cin >> a >> b;
        G[a].push_back(b);
    }

    ll ans=0;

    for(int i=1; i<=m; i++) {
        rep(k, G[i].size()) {
            pq.push(G[i][k]);
        }

        if(! pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans << endl;
}

