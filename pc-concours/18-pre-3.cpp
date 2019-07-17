#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    int n,c, p, sum=0;

    cin >> n >> c;
    for (int i=0; i<c; i++) {
        cin >> p;
        sum += p;
    }

    int ans = sum/(n+1);
    if (sum % (n+1) != 0) {
        ans ++;
    }

    cout << ans << endl;
}

