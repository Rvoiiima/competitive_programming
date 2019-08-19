#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

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

ll lcm(ll a, ll b) {
    return a*b/gcd(a, b);
}

int main() {
    ll a, b;
    while (cin >> a >> b) {
        if (a==0) break;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
}


