#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 10000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int a[MAXN];
int main() {
    int n;
    cin >> n;
    rep(i, n) {
        cin >> a[i];
    }

    reverse(a, a+n);

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

}

