#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1001
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int a[MAXN];
bool flag[MAXN];


int main() {
    int n, d, p;

    cin >> p;

    rep(re, p) {
        cin >> n >> d;
        rep(i, n) {
            cin >> a[i];
        }

        rep(i, d) {
            rep(k, n) {
                if (a[k] <= 3) flag[k] = true;
                else flag[k] = false;
            }
            rep(k, n) {
                if(flag[k]) {
                    if (k-1 >= 0) a[k-1] = min(10, ++a[k-1]);
                    a[k]=10;
                    if (k+1 < n) a[k+1] = min(10, ++a[k+1]);
                }
            }
            rep(k, n) {
                --a[k];
            }
        }

        rep(k, n) {
            cout << a[k] << " ";
        }
        cout << endl;
    }

}

