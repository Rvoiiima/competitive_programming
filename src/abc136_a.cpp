#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
const ll mod = 1e9+7;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c-(a-b);
    if (ans<0) ans = 0;
    cout << ans << endl;

}

