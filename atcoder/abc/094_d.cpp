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

ll n;
ll a[MAXN];
int main() {
    cin >> n;
    rep(i,n) {
        cin >> a[i];
    }

    sort(a, a+n);

    ll l = 0, r = n-2;
    ll mid;
    ll ans_n = a[n-1];
    while (r-l>1) {
        mid = (l+r)/2;
        if (a[mid] >= ans_n/2) {
            r = mid;
        } else {
            l = mid;
        }
    }
    ll ans_r = ((abs(a[l]-ans_n/2) < abs(a[r]-ans_n/2)) ? a[l] : a[r]);

    cout << ans_n << " " << ans_r << endl;

}

