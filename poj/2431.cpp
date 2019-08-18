#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int n, l, p;
int a[MAXN], b[MAXN];

void solve() {
    a[n] = l;
    b[n] = 0;
    n++;

    priority_queue<int> que;

    int ans = 0, pos = 0, tank = p;

    for(int i=0; i<n; ++i) {
        int d = a[i] - pos;

        while (tank - d < 0) {
            if (que.empty()) {
                cout << "-1" << endl;
                return;
            }
            tank += que.top();
            que.pop();
            ans ++;

        }

        tank -= d;
        pos = a[i];
        que.push(b[i]);
    }

    cout << ans << endl;
}


int main() {
    cin >> n;

    rep(i, n) {
        cin >> a[i] >> b[i];
    }

    cin >> l >> p;
    solve();
}

