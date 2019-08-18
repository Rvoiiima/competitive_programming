#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e11)
#define PI (acos(-1))
#define MAXN 110
#define MAXV 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

ll dp[MAXN][MAXV];
int n, W, w[110], v[110];

int main() {
    cin >> n >> W;
    rep(i, n) {
        cin >> w[i] >> v[i];
    }

    rep(i, n+1) {
        rep(val, MAXV) {
            dp[i][val] = ll(INF);
        }
    }

    dp[0][0]=0;
    rep(i, n) {
        rep(val, MAXV) {
            if (val < v[i]) {
                dp[i+1][val] = dp[i][val];
            } else {
                dp[i+1][val] = min(dp[i][val], dp[i][val-v[i]] + w[i]);
            }
            //cout << dp[i+1][val] << " ";
        }
    }

    int ans = 0;
    rep(val, MAXV) if(dp[n][val] <= W) ans = max(ans, val);
    cout << ans << endl;
}

