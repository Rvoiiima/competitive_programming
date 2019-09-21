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
    int cone=0, ctwo=0;
    int tmp;
    rep(i,3) {
        cin >> tmp;
        if (tmp==2) ctwo ++;
        else cone ++;
    }

    if (cone > ctwo) cout << 1 << endl;
    else cout << 2 << endl;
}

