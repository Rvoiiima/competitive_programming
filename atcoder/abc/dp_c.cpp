#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

ll dp[MAXN][3];
ll n;
ll a[MAXN][3];
ll maxv = -1;


int main() {

    cin >> n;
    for(ll i=0; i<n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    dp[0][0] = a[0][0];
    dp[0][1] = a[0][1];
    dp[0][2] = a[0][2];

    for(ll i=1; i<n; i++) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i][0];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + a[i][1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + a[i][2];
    }

    cout << max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));


}
