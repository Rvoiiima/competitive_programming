#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 300030
#define rep(i,n) for(ll i=0;i<n;++i) 

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    priority_queue<ll> pq;
    vector<vector <ll> > G(MAXN);
    ll n, m, tmp, ans;

    cin >> n;

    rep(i,n) {
        cin >> m;
        rep(k, m) {
            cin >> tmp;
            //cout << tmp;
            G[i].push_back(tmp);
        }
    }
    ans = 0;
    for(int i=n-1; i>=0; i--) {
        for(int k=0; k< G[i].size(); k++) {
            pq.push(G[i][k]);
        }
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
}
