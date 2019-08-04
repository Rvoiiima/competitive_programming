#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010

const ll mod = 1e9+7;

int main() {
    int n, m;
    int tmp;

    cin >> n >> m;
    vector<int> ok(n+1, true);
    
    for(int i=0; i<m; i++) {
        cin >> tmp;
        ok[tmp] = false;
    }

    vector<ll>dp(n+1);
    dp[0] = 1;
    
    for(int  now=0; now<n;++now) {
        for(int next=now+1; next<=min(now+2, n); ++next ) {
            if (ok[next]) {
                dp[next] += dp[now];
                dp[next] %= mod;
            }
        }
    }

    cout << dp[n] << endl;
}
