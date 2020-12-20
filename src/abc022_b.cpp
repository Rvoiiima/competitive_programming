#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll mod = 1e9 + 7;

template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}

bool pairCompare(const P &firstElof, const P &secondElof) {
    return firstElof.second < secondElof.second;
}

bool flag[MAXN];
int main() {
    int n, a;

    cin >> n;
    int ans = 0;
    rep(i, n) {
        cin >> a;
        if(flag[a]) {
            ++ans;
        } else {
            flag[a] = true;
        }
    }

    cout << ans << endl;
}
