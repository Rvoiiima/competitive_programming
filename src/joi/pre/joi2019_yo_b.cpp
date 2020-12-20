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

vector<int> x;
int main() {
    int n, tmp, m;
    cin >> n;

    rep(i, n) {
        cin >> tmp;
        x.push_back(tmp);
    }

    cin >> m;

    rep(i, m) {
        cin >> tmp;
        tmp--;

        if(x[tmp+1] != x[tmp]+1 and x[tmp]+1 < 2020) {
            x[tmp] ++;
        }
    }

    rep(i, n) {
        cout << x[i] << endl;
    }

}

