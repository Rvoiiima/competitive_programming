#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int n, k;
    cin >> n >> k;
    int h[MAXN];

    for(int i=1; i<=n; i++) {
        cin >> h[i];
    }
    vector<ll> dp(n+1, ll(INF));

    dp[1] = 0;
    for(int now=1; now<=n; ++now) {
        for(int next=now+1; next<=min(n, now+k); ++next) {
            dp[next] = min(dp[next], dp[now]+ abs(h[now]-h[next]));
        }
    }
    
    cout << dp[n] << endl;
}

