#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
#define MOD 2019

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}
int main() {
    ll l, r;
    cin >> l >> r;
    ll ans = ll(INF);

    ll until = min(ll(2019), r-l) + l+1;

    ll i, k;
    for(i=l; i<until; i++) {
        for(k=i+1; k<until; k++) {
            if(i!=k) {
                ans = min(i*k%MOD, ans);
                if (ans == 0) break;
            }
        }
    }
    cout << ans << endl;
}
