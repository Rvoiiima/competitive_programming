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
    int n;
    cin  >> n;

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};


    int tmp;
    vector<int> p, q;

    rep(i, n) {
        cin >> tmp;
        p.push_back(tmp);
    }

    rep(i, n) {
        cin >> tmp;
        q.push_back(tmp);
    }

    ll x, y;
    ll cnt = 0;
    do {
        bool flag_x=true, flag_y=true;
        rep(i, n) {
            if (p[i] != a[i]) flag_x = false;
            if (q[i] != a[i]) flag_y = false;
        }

        if (flag_x) x = cnt;
        if (flag_y) y = cnt;

        cnt++;
    } while (next_permutation(a, a+n));

    cout << abs(x-y) << endl;
            

}

