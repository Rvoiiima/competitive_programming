#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }



int cnt[MAXN];
bool flag = true;
int main() {
    int n;
    cin >> n;
    int tmp;
    rep(i, n) {
        cin >> tmp;
        ++cnt[tmp];
    }

    if (n%2 == 1) {
        for(int i=2; i<n; i+=2) {
            if (cnt[i] != 2) {
                flag = false;
                break;
            }
        }
        if (cnt[0] != 1) flag = false;

    } else {
        for(int i=1; i<n; i+=2) {
            if (cnt[i] != 2) {
                flag = false;
                break;
            }
        }
    }

    ll ans = 1;

    if (flag) {
        for(int i=0; i<(n/2); ++i) {
            ans *= 2;
            ans %= mod;
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
}

