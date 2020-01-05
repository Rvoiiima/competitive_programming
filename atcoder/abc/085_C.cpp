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
    ll y;
    cin >> n >> y;

    int ans_i = -1;
    int ans_j = -1;
    int ans_k = -1;

    for(int i=0; i<=n; ++i) {
        for(int j=0; j<=n-i; ++j) {
            if (i*10000+j*5000+(n-i-j)*1000 == y) {
                ans_i = i;
                ans_j = j;
                ans_k = n-i-j;
            }
        }
    }

    cout << ans_i << " " << ans_j << " " << ans_k << endl;
}

