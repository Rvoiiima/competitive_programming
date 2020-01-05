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
    string S;
    cin >> S;

    int n = S.size();
    ll ans = 0;

    for(int bit=0; bit < (1 << (n-1)); ++bit) {
        ll tmp = 0;
        for(int i=0; i<n; ++i) {
            tmp *= 10;
            tmp += S[i] - '0';

            if (bit & (1<<i)) {
                ans += tmp;
                tmp = 0;
            }
        }

        ans += tmp;
    }

    cout << ans << endl;

}

