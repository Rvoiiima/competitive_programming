#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000001
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll dp[MAXN];



void re(int x, int y) {
    if (x>y)  swap(x, y);

    if (x < 0 or y < 0) return;
    dp[x][y] += 1;
    re(x-2, y-1);
    re(x-1, y-2);
}

int main() {
    int x, y;
    cin >> x >> y;
    re(x, y);
    ll ans = dp[0][0] % mod;
    cout << ans << endl;
}

