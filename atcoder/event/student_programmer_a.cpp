#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 2001
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1000000007;


int main() {
    ll n, k;
    cin >> n >> k;
    vector<int> A(n);

    rep(i, n) {
        cin >> A[i];
    }


    int cnt_iso=0, cnt_rel=0;

    rep(i, n) {
        for(int j=i+1; j<n; ++j) {
            if(A[i] > A[j]) ++cnt_iso;
        }
    }

    rep(i, n) {
        for(int j=0; j<n; ++j) {
            if(A[i] > A[j]) ++cnt_rel;
        }
    }

    ll ans = 0;
    if (k>1) {
        ans += (k * cnt_iso) % mod;
        ll K = (k*(k-1))/2;
        K %= mod;
        ans += (K * cnt_rel);
        ans %= mod;
    } else {
        ans = cnt_iso;
    }

    cout << ans << endl;

}

