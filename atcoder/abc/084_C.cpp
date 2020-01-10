#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 510
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll c[MAXN], s[MAXN], f[MAXN];
int main() {
    int n;
    cin >> n;

    rep(i, n-1) {
        cin >> c[i] >> s[i] >> f[i];
    }

    rep(i, n-1) {
        ll cur = 0;
        for(int k=i; k<n-1; ++k) {
            if (cur <= s[k]) {
                cur = (s[k] + c[k]);
            } else {
                if (cur % f[k] == 0) {
                    cur += c[k];
                } else { 
                    cur += f[k] - (cur % f[k]);
                    cur += c[k];
                }
            }
        }

        cout << cur << endl;
    }

    cout << 0 << endl;

}

