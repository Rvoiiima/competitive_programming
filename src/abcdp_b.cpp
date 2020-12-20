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

void frog2(int n) {

    F[0] = 0;
    for(int i=1; i<=n; i++) {
        ll minv = int(INF);

        for(int j=1; j<=k; j++) {
            if (i-j>=0) {
                minv = min(minv, ll(F[i-j] + abs(h[i] - h[i-j])));
            }
        }
        F[i] = minv;
    }

}


int main() {

    cin >> n >> k;
    for(int i=0; i<n; i++) {
        cin >> h[i];
    }

    frog2(n-1);
    cout << F[n-1] << endl;
}
