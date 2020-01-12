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

bool flag[MAXN];
int pe[MAXN];
int main() {
    int n, m;
    cin >> n >> m;

    int p;
    string ju;

    rep(i, m) {
        cin >> p;
        --p;
        cin >> ju;
        
        if (ju == "AC") {
            flag[p] = true;
        }

        if (ju == "WA" and flag[p] == false) {
            pe[p]++;
        }
    }

    ll ans_pe = 0;
    ll ans_ac = 0;

    rep(i, n) {
        if (flag[i]) {
            ans_ac ++;
            ans_pe += pe[i];
        }

    }
    cout << ans_ac << " " << ans_pe << endl;

}

