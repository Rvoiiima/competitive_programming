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

int main() {
    
    int a, b;
    ll x;
    double ans, h;
    cin >> a >> b >> x;
    ll vol = a*a*b;
    if (x >= vol/2) {
        h = 2.0* (vol-x) / (a*a);
        ans = atan2(h, a) * (180/PI);
    } else {
        h = 2.0*x / (a*b);
        ans = atan2(b, h) * (180/PI);
    }
    cout << setprecision(14);
    cout << ans << endl;
}
