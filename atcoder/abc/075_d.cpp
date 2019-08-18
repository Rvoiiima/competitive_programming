#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 55
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> x(n);
    vector<ll> y(n);
    vector<ll> xarr, yarr;

    rep(i, n) {
        cin >> x[i] >> y[i];
        xarr.push_back(x[i]);
        yarr.push_back(y[i]);
    }

    sort(xarr.begin(), xarr.end());
    sort(yarr.begin(), yarr.end());

    ll ans = 1LL * ((xarr[n-1]-xarr[0]) * (yarr[n-1]-yarr[0]));

    for(int x1=0; x1<n; ++x1) {
        for(int x2=x1+1; x2<n; ++x2) {
            for(int y1=0; y1<n; ++y1) {
                for(int y2=y1+1; y2<n; ++y2) {
                    int num = 0;
                    ll lx = xarr[x1], rx = xarr[x2];
                    ll by = yarr[y1], uy = yarr[y2];

                    for(int i=0; i<n; ++i) {
                        if(lx <= x[i] && rx >= x[i] && by <= y[i] && uy >= y[i]) ++num;
                    }

                    if (num >= k) ans = min(ans, 1LL * ((rx-lx)*(uy-by)));
                }
            }
        }
    }

    cout << ans << endl;
}

