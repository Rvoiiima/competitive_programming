#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 31
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

ll a[MAXN];
int main() {
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for(int i=3; i<=30; ++i) {
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }

    int n;

    while(cin>>n, n) {
        cout << a[n]/3650 + 1 << endl;
    }

}

