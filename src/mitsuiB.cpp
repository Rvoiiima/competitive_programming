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

bool is_integer( double x ){
  return std::floor(x)==x;
}
int main() {
    int N;
    cin >> N;
    double ans = N * 100.0/108;
    if (is_integer(ans)) {
        cout << ans << endl;
    } else {
        if (floor(ceil(ans)*1.08) == N) {
            cout << ceil(ans) << endl;
        } else if (floor(floor(ans)*1.08) == N) {
            cout << floor(ans) << endl;
        } else {
        cout << ":(" << endl;
        }
    }
}

