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

int x[1010];

int main() {
    int n;
    cin >> n;
    rep(i,n) {
        cin >> x[i];
    }

    ll mnt=(ll) INF;
    int ans;
    rep(i,2001) {
        ll tmp=0;
        rep(k,n) {
            tmp += abs(i-x[k]);
        }
        if (mnt>=tmp) {
            mnt = tmp;
            ans = i;
            //cout << tmp << endl;
        }
    }

    cout << ans+1 << endl;

}

