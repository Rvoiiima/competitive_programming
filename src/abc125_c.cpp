#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int swap(int a, int b) {
}
int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {

    int n;
    int a[MAXN];
    int r[MAXN], l[MAXN];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    l[0] = 0; r[n] = 0;

    for(int i=1; i<n; i++) {
        l[i] = gcd(l[i-1], a[i-1]);
    }

    for(int i=n-1; i>=0; i--) {
        r[i] = gcd(r[i+1], a[i]);
    }

    int g[MAXN];
    int ans =0;
    for(int i=0; i<n; i++) {
        g[i] = gcd(l[i], r[i+1]);
        ans = max(ans, g[i]);
    }

    cout << ans << endl;

}

