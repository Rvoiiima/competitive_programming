#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    int n;
    vector<int> a;
    vector<int> b;
    vector<int> c;

    cin >> n;
    int tmp;
    rep(i,n) {
        cin >> tmp;
        a.push_back(tmp);
    }
    int ans = 0;
    rep(i,n) {
        cin >> tmp;
        ans += tmp;
        b.push_back(tmp);
    }
    rep(i,n-1) {
        cin >> tmp;
        c.push_back(tmp);
    }

    rep(i, n-1) {
        if (a[i]+1 == a[i+1]) ans += c[a[i]-1];
    }
    cout << ans << endl;
}

