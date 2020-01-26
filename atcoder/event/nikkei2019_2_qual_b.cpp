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

int cnt[MAXN];

int main() {
    int n;
    cin >> n;
    int tmp;
    int m = 0;
    rep(i, n) {
        cin >> tmp;
        ++cnt[tmp];
        m = max(m, tmp);
    }

    ll ans = 0;

    for(int i=1; i<m; ++i) {
        ll tmp2 = 1;
        for(int k=0; k<cnt[i]; ++k) {
            tmp *= cnt[i-1];
        }
        ans *= cnt[i-1];
    }

    cout << ans << endl;
}

