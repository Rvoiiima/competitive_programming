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
    ll minv = ll( INF );

    for (ll i=l; i<r; i++) {
        for(ll j=i+1; j<r; j++) {
            cout << i*j%MOD << endl;
        }
    }

}
