#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int MAX = 1010;
const int MOD = 1000000007;

ll frac[MAXN];

//todo: Nまでの素因数の列挙
int main() {
    int n;
    cin >> n;
    ll ans = 1;
    frac[1] = 1;

    for(int p=2; p<=n; ++p) {
        ll tmp;
        for(int i=1; pow(p, i) < n; ++i) {
            frac[p] += n/pow(p, i);
            frac[p] %= mod;
        }
    }

    for(int i=2; i<=n; ++i) {
        cout << frac[i] << endl;
        ans *= frac[i];
        ans %= mod;
    }
    cout << ans << endl;
}

