#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll ans = 0;
void re(int x, int y) {
    if (x == 0 and y == 0) {
        ans += 1;
    } else if (x < 0 or y < 0) {
        return;
    } 
    re(x-2, y-1);
    re(x-1, y-2);
}

int main() {
    int x, y;
    cin >> x >> y;
    re(x, y);
    ans %= mod;
    cout << ans << endl;
}

