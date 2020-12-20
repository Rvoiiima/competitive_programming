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
    int n, d;
    int x[11][11];

    cin >> n >> d;

    for(int i=0; i<n; i++) {
        for(int j=0; j<d; j++) {
            cin >> x[i][j];
        }
    }
    
    int ans=0;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            double sq = 0;
            for(int k=0; k<d; k++) {

                sq += pow(x[i][k]-x[j][k], 2.0);

            }
            sq = sqrt(sq);

            if (floor(sq) == ceil(sq)) ans++;
        }
    }

    cout << ans << endl;
}

