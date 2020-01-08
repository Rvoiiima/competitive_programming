#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> x;

int main() {
    ll n, k;
    ll tmp;

    cin >> n >> k;

    rep(i, n) {
        cin >> tmp;
        x.push_back(tmp);
    }
    
    ll ans = (ll) INF;
    rep(i, n-k+1) {
        ll l, r;

        l = x[i];
        r = x[i+k-1];

        tmp = min(abs(l)+abs(l-r), abs(r)+abs(r-l));

        ans = min(ans, tmp);
    }

    cout << ans << endl;


}

