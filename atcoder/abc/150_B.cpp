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
    string s;

    cin >> n;
    cin >> s;

    ll ans = 0;

    rep(i, n-2) {
        if (s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C') {
            ++ans;
        }
    }

    cout << ans << endl;


}

