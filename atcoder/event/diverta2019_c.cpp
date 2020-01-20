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
    int n;
    string s;
    cin >> n;
    int ans = 0;
    int ab =0, a=0, b=0;
    rep(i, n) {
        cin >> s;
        int size = s.size();
        rep(i, size-1) {

            if (s[i] == 'A' and s[i+1] == 'B') {
                ++ans;
            }
        }
            
        if (s[0] == 'B' and s[size-1] == 'A') {
            ++ab;
        } else if (s[0] == 'B') {
            ++b;
        } else if (s[size-1] == 'A') {
            ++a;
        }
    }

    if (ab == 0) {
        ans += min(a, b);
    } else if (ab > 0 ) {
        if ( a > 0 or b > 0) {
            ans += ab + min(a, b);
        } else {
            ans += ab - 1;
        }
    }

    cout << ans << endl;
}

