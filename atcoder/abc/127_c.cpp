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

int n, m;
int l=-1, r=MAXN;
int dum_l, dum_r;
int main() {
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> dum_l >> dum_r;
        if (dum_l>l) l = dum_l;
        if (dum_r<r) r = dum_r;
    }
    if (l > r) {
        cout << 0 << endl;
    } else {
        cout << (r-l+1) << endl;
    }
}
