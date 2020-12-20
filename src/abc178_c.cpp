#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, s, n) for(int i = (s); i < (int)(n); ++i)
const ll mod = 1e9 + 7;

template <class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}

bool pairCompare(const P &firstElof, const P &secondElof) {
    return firstElof.second < secondElof.second;
}

int main() {
    int n;
    cin >> n;

    ll ans = 0;
    ll tmp = 0;
    rep(i, n - 1) {
        tmp += n;
        tmp %= mod;
    }

    ans = tmp;
    ans *= 10;
    ans %= mod;
    ans *= (n - 2);
    ans %= mod;

    if(n == 1) {
        ans = 0;
    }
    if(n == 2) {
        ans = 2;
    }

    cout << ans << endl;
}
