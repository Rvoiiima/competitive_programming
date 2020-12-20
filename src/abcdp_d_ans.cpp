#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 110
#define MAXW 100001
 
ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}
 
ll n, W;
ll w[MAXN], v[MAXN];
ll dp[MAXN][MAXW];
 
int main() {
    cin >> n >> W;
    for(int i=0; i<n; i++) {
        cin >> w[i] >> v[i];
    }
 
    for(int i=0; i<W; i++) dp[0][i] = 0;
 
    for(int i=0; i<n; i++) {
        for(int k=0; k<=W; k++) {
            if (k >= w[i]) {
                dp[i+1][k] = max(dp[i][k-w[i]] + v[i], dp[i][k]);
            } else {
                dp[i+1][k] = dp[i][k];
            }
        }
    }
 
    cout << dp[n][W] << endl;
}
