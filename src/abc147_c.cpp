#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}

int a[20];
int x[20][20], y[20][20];
int n;

int count(int x) {
    if (x==0) return 0;
    return count(x>>1) + (x&1);
}


int main() {
    cin >> n;

    for(int i=1; i<=n; ++i) {
        cin >> a[i];
        for(int k=1; k<=a[i]; ++k) {
            cin >> x[i][k] >> y[i][k];
        }
    }

    int ans = 0;

    for(int bit=0; bit< (1 << n); ++bit) {
        bool flag = true;

        for(int i=1; i<=n; ++i) {
            if (! (bit & (1 << (i-1)))) continue;

            for(int j=1; j<=a[i]; ++j) {
                if (((bit >> (x[i][j]-1)) & 1) ^ y[i][j] ) flag = false;
            }
        }
        if (flag) {
            cout << bit << endl;
            ans = max(ans, count(bit));
        }
    }

    cout << ans << endl;

}

