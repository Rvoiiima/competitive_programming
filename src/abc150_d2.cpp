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

vector<ll> a;

ll swap(ll a, ll b) {
    ll tmp;
    tmp = a;
    a = b;
    b = tmp;
}

ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a, b);
}

int main() {
    ll n, m;
    cin >> n >> m;
    ll tmp;
    ll ma = -1;
    rep(i, n) {
        cin >> tmp;
        a.push_back(tmp);
        if (ma < tmp) ma = tmp;
    }

    ll lc = 1;
    rep(i, n) {
         lc = lcm(a[i], lc);
    }

    ll ans = (m+(lc/2))/lc;

    cout << ans << endl;

}

