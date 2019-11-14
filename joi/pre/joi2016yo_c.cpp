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

char f[55][55];
int main() {
    int n, m;
    cin >> n >> m;
    rep(i, n) {
        rep(k, m) {
            cin >> f[i][k];
        }
    }
    int ans = 1000000;
    
    int l1, l2;
    for(l1=1; l1<n-1; ++l1) {
        for(l2=l1+1; l2<n; ++l2) {
            int tmp = 0;
            for(int i=0; i<l1; ++i) {
                for(int k=0; k<m; ++k) {
                if (f[i][k] != 'W')  tmp ++;
                }
            }
            for(int i=l1; i<l2; ++i) {
                for(int k=0; k<m; ++k) {
                if (f[i][k] != 'B')  tmp ++;
                }
            }
            for(int i=l2; i<n; ++i) {
                for(int k=0; k<m; ++k) {
                if (f[i][k] != 'R')  tmp ++;
                }
            }

            ans = min(ans, tmp);
        }
    }

    cout << ans << endl;
}
