#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1010
#define MAXH 10001
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;
const ll inf = 1e9;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}

int h, n;
int a[MAXN], b[MAXN];
ll dp[MAXN][MAXH*2+10];

void solve() {

    rep(i, n+1) {
        rep(k, h+MAXH+10) {
            dp[i][k] = inf;
        }
    }

    dp[0][0] = 0;
    rep(i, n) {
        rep(k, h+MAXH) {
            if (k < a[i]) {
                dp[i+1][k] = dp[i][k];
            } else {
                dp[i+1][k] = min(dp[i][k], dp[i+1][k-a[i]] + b[i]);
            }
        }
    }
}

int main() {
    cin >> h >> n;
    rep(i, n) {
        cin >> a[i] >> b[i];
    }

    solve();

    ll ans = (ll) mod;
    for(int k=h; k<h+MAXH; ++k) ans = min(ans, dp[n][k]);
    

    cout << ans << endl;

}

