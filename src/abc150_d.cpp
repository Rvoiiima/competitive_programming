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

ll cnt_2(ll k) {
    ll tmp = k;
    ll ans = 0;
    while (tmp) {
        tmp /= 2;
        ans++;
    }
    return ans;
}


int main() {
    ll n, m;
    cin >> n >> m;
    ll tmp;
    bool flag = true;
    ll times_2;
    rep(i, n) {
        cin >> tmp;
        tmp /= 2;
        a.push_back(tmp);
    }

    ll lc = 1;
    rep(i, n) {
         lc = lcm(a[i], lc);
    }

    ll ans = m/lc;
    ans = (ans+1)/2;

    if (lc > m) ans = 0;

    rep(i, n) {
        if ((lc/a[i])%2 == 0) {
            cout << 0 << endl;
            return 0;
        }
    }


    cout << ans << endl;

}

