#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;
const ll e9 = 1e9;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> a;
int main() {
    ll n, k, s;
    cin >> n >> k >> s;

    rep(i, k) {
        a.push_back(s);
    }

    for(int i=k; i<n; ++i) {
        if (s == e9) {
            a.push_back(1);
        } else { 
            a.push_back(s+1);
        }
    }

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;
        
}

