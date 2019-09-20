#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int a[101];

int main() {
    int n;
    vector<ll> b;
    cin >> n;
    ll tmp;
    rep(i, n-1) {
        cin >> tmp;
        b.push_back(tmp);
    }

    a[n-1] = b[n-2];
    for(int i=n-2; i>0; --i) {
        a[i]=min(b[i], b[i-1]);
    }

    a[0] = b[0];

    ll ans=0;
    rep(i, n) {
        ans += a[i];
    }
        
    cout << ans << endl;
}

