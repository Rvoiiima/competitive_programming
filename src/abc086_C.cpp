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
    ll n;
    cin >> n;

    ll xold=0, yold=0, told=0;
    ll x, y, t;

    bool ans = true;

    rep(i, n) {
        cin >> t >> x >> y;

        if(abs(x-xold)+abs(y-yold) > t-told) {
            ans = false;
        }

        if((x+y)%2 != t%2) {
            ans = false;
        }

        xold = x;
        yold = y;
        told = t;
    }

    cout << (ans ? "Yes" : "No") << endl;

}

