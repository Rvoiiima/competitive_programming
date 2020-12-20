#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}

bool nl[MAXN][51];
ll ml[51];

int main() {
    ll N, M, q;
    cin >> N >> M >> q;
    ll x, n, m;

    rep(i, M) {
        ml[i] = N;
    }
        
    rep(i, q) {
        cin >> x >> n;
        n--;
        if (x == 2) {
            cin >> m;
            m--;
            ml[m]--;
            nl[n][m] = true;
        } else if (x == 1) {
            ll point = 0;

            rep(k, M) {
                if (nl[n][k]) {
                    point += ml[k];
                }
            }
            cout << point << endl;
        }
    }
}
