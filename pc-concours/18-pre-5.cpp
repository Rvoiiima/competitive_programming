#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
int digit(int x) {
    int sum = 0;
    int dig;
    while (x) {
        dig = x % 10;
        sum += dig;
        x /= 10;
    }
    return sum;
}
        

int main() {
    int a, n, m;

    cin >> a >> n >> m;

    int ans =0;

    ll x;

    for(int y=1; y<73; y++) {
        x = pow((y+a), n);
        if (x > m) break;
        if (digit(x) == y) {
            ans++; 
//            cout << x << endl;
        }
    }
    cout << ans << endl;
}

