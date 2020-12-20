#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 110
#define MAXW 100001
#define rep(i,n) for (int i = 0; i < n; ++i)
const ll mod = 1e9+7;



ll n, W;
ll dp[MAXN][MAXW];
ll v[MAXN], w[MAXN];

int main() {
    cin >> n >> W;

    for(int i=0; i<n; ++i) {
        cin >> w[i] >> v[i];
    }


    for(int i=0; i<W+1; ++i) {
        dp[0][i] = 0;
    }

    for(int i=0; i<n; ++i) {
        for(int k=0; k<=W; ++k) {
            if (k >= w[i]) {
                dp[i+1][k] = max(dp[i][k], dp[i][k-w[i]] + v[i]);
            } else {
                dp[i+1][k] = dp[i][k];
            }
        }
    }
    cout << dp[n][W] << endl;
}
