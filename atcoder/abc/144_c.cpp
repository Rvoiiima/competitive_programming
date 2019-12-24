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
    ll lim = ll(sqrt(n));
    ll k=0;
    ll i;
    for(i=lim; i>0; i--) {
        if (n%i==0){
            k = n/i;
            break;
        }
    }
    cout << (k-1) + (i-1) << endl;
}

