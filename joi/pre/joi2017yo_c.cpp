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

char a[101][101];

int main() {
    int n, m, d;
    cin >> n >> m >> d;
    rep(i, n) {
        rep(j, m) {
            cin >> a[i][j];
        }
    }

    bool flag;
    int cnt = 0;
    rep(i, n) {
        rep(j, m-(d-1)) {
            flag = true;
            rep(k, d) {
                if (a[i][j+k] == '#') {
                    flag = false;
                }
            }
            if (flag) cnt ++;
        }
    }

    rep(i, n-(d-1)) {
        rep(j, m) {
            flag = true;
            rep(k, d) {
                if (a[i+k][j] == '#') {
                    flag = false;
                }
            }
            if (flag) cnt ++;
        }
    }
    cout << cnt << endl;
    
}

