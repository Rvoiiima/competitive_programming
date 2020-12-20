#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 3010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int n, m;
int dp[MAXN][MAXN];
string s, t;
int main() {
    cin >> s >> t;
    n = s.size();
    m = t.size();

    string ans = "";

    rep(i, n) {
        for(int k=0; k<m; ++k) {
            if (s[i] == t[k]) {
                dp[i+1][k+1] = dp[i][k] + 1;
            } else {
                dp[i+1][k+1] = max(dp[i][k+1] , dp[i+1][k]);
            }
        }
    }

    int a=n, b=m;

    while (a>0 && b>0) {
        if (dp[a][b] == dp[a-1][b]) --a;
        else if (dp[a][b] == dp[a][b-1]) --b;
        else {
            --a; --b;
            ans = s[a] + ans;
        }
    }

    //cout << dp[n][m] << endl;
    cout << ans << endl;
}

