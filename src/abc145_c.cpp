#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int x[10], y[10];
int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
int main() {
    int n;
    cin >> n;
    rep(i, n) {
        cin >> x[i] >> y[i];
    }
    
    double ave = 0;
    do{
        double tmp = 0;
        rep(i, n-1) {
            int j = a[i];
            int k = a[i+1];
            tmp += sqrt((x[j] - x[k])*(x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]));
        }

        ave += tmp;
    } while(next_permutation(a, a+n));

    int d = 1;
    for(int i=1; i<=n; i++) {
        d *= i;
    }
   
    cout << setprecision(18);
    cout << ave/d << endl;
}

