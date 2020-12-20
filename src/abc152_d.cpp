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

int d[10][10];

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; ++i) {
        string s;
        s = to_string(i);
        ++d[s[0] - '0'][s[s.size()-1] - '0'];
    }

    ll ans = 0;
    for(int i=1; i<10; ++i) {
        for(int k=1; k<10; ++k) {
            if (i!=k) {
                ans += (d[i][k] * d[k][i]);
            } else {
                ans += d[i][k] * d[i][k];
            }
        }
    }

    cout << ans << endl;
}
