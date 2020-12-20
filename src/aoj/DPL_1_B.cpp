#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100
#define MAXW 10000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int dp[MAXN+1][MAXW+1];
int n, W;
int w[MAXN+1], v[MAXN+1];

int knapsack(int i, int j) {
    if (dp[i][j] >= 0) {
        return dp[i][j];
    }

    int res;

    if (i == n) {
        res = 0;
    } else if (j < w[i]) {
        res = knapsack(i+1, j);
    } else {
        res = max(knapsack(i+1, j), knapsack(i+1, j-w[i])+v[i]);
    }

    return dp[i][j] =res;

}

int main() {

    cin >> n >> W;
    memset(dp, -1, sizeof(dp));

    rep(i, n) {
        cin >> v[i] >> w[i];
    }
    cout << knapsack(0, W)  << endl;
/*
    rep(i, n) {
        rep(j, W) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
*/

}

