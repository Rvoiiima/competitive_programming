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
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    double ans =  W * H / 2.0;
    cout << ans << " ";
    if (x == W/2 * 1.0 && y == H/2 * 1.0) cout << 1 << endl;
    else cout << 0 << endl;
}

