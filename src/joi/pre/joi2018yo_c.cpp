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

int a[26][26];

int n_h[26];
int n_w[26];

int main() {
    int h, w;
    cin >> h >> w;

    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }
/*
    rep(i, h) {
        rep(j, w) {
            n_h[i] += a[i][j];
        }
    }

    rep(j, w) {
        rep(i, h) {
            n_w[j] += a[i][j];
        }
    }
*/
    int ans = 1000000;
    int tmp, x, y;
    rep(i, h) {
        rep(j, w) {
            tmp = 0;
            rep(k, h) {
                rep(l, w) {
                    x = abs(i-k);
                    y = abs(j-l);
                    if (x < y) {
                        tmp += x*a[k][l];
                    } else {
                        tmp += y*a[k][l];
                    }
                }
            }
            ans = min(ans, tmp);
        }
    }

    cout << ans << endl;

}

