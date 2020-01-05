#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int a[2][105];
int sum_i[2][105];
int main() {
    int n;
    cin >> n;

    rep(i, n) {
        cin >> a[0][i];
    }

    rep(i, n) {
        cin >> a[1][i];
    }

    for(int i=1; i<=n; ++i) {
        sum_i[0][i] = a[0][i-1] + sum_i[0][i-1];
        sum_i[1][i] = a[1][n-i] + sum_i[1][i-1];
    }

    int ans = -1;

    for(int i=1; i<=n; ++i) {
        ans = max(ans, sum_i[0][i]+sum_i[1][n-i+1]);
    }

    cout << ans << endl;

}

