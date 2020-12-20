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

vector<int> a;
int main() {
    int n, m;
    cin >> n >> m;
    int tmp;

    rep(i, n+m) {
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    rep(i, n+m) {
        cout << a[i] << endl;
    }

}

