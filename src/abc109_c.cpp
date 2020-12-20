#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int x[MAXN];

ll swap(ll a, ll b) {
    ll tmp;
    tmp = a;
    a = b;
    b = tmp;
}
ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int N, X;
    cin >> N >> X;
    rep(i, N) {
        cin >> x[i];
    }
    x[N] = X;

    sort(x, x+N+1);


    ll ans = x[1] - x[0];
    for(int i=2; i<N+1; ++i) {
        ans = gcd(ans, x[i]-x[i-1]);
    }

    cout << ans << endl;
}

