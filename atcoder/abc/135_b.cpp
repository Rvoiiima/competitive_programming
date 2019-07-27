#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int n, p[52];

    cin >> n;
    int cnt = 0;
    for(int i=1; i<=n; i++) {
        cin >> p[i];
        if (p[i] != i) cnt ++;
    }

    if (cnt == 0 || cnt == 2) cout << "YES" <<endl;
    else cout << "NO" <<endl;

}

