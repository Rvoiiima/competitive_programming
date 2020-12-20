#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    ll n, a[MAXN], b[MAXN];

    ll ans;
    cin >> n;

    for(int i=0; i<n+1; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    for(int i=0; i<n; i++) {
        if (a[i] >= b[i]) {
            ans += b[i];
            a[i] -= b[i];
            b[i] = 0;
        } else {
            ans += a[i];
            b[i] -= a[i];
            a[i] = 0;
        }

        if (a[i+1] >= b[i]) {
            ans += b[i];
            a[i+1] -= b[i];
            b[i] = 0;
        } else {
            ans += a[i+1];
            b[i] -= a[i+1];
            a[i+1] = 0;
        }
    }

    cout << ans << endl;

}

