#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int F[MAXN]; //min cost
int n, k;
int h[MAXN]; //each cost

int frog2(int n) {

    if (n == 0) {
        return F[n] = 0;
    }

    if (F[n] != -1) return F[n];

    
    ll minv = ll(INF);

    for(int j=1; j<=k; j++) {
        if (n-j>=0) {
            minv = min(minv, ll(frog2(n-j) + abs(h[n] - h[n-j])));
        }
    }
    return F[n] = minv;

}


int main() {

    cin >> n >> k;
    for(int i=0; i<n; i++) {
        cin >> h[i];
        F[i] = -1;
    }

    frog2(n-1);
    cout << F[n-1] << endl;
}
