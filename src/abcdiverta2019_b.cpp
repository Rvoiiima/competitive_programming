#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
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

ll x[55], y[55];
int n;
ll ma = 0;

int main() {
    cin >> n;
    rep(i, n) { cin >> x[i] >> y[i]; }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                continue;
            ll p = x[i] - x[j];
            ll q = y[i] - y[j];
            ll cnt = 0;
            for(int k = 0; k < n; k++) {
                for(int l = 0; l < n; l++) {
                    if(k == l)
                        continue;

                    if(x[k] - x[l] == p and y[k] - y[l] == q) {
                        cnt++;
                    }
                }
            }
            ma = max(cnt, ma);
        }
    }
    cout << n - ma << "\n";
}
