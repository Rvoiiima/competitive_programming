#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

ll swap(ll a, ll b) {
}
ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b) {
    return (a*b) / gcd(a, b);
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    a--;
    ll lc = lcm(c, d);

    ll ans = 0;

    ans += (b - ((b/c) + (b/d) - (b/lc)));
    ans -= (a - ((a/c) + (a/d) - (a/lc)));

    cout << ans << endl;

}

