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

char a[55][55];
char b[55][55];
int n, m;

bool judge() {

    bool flag = true;
    rep(si, n-m+1) {
        rep(sk, n-m+1) {
            flag = true;
            for(int i=0; i<m; ++i) {
                for(int k=0; k<m; ++k) {
                    //cout << si+i << " " << sk+k << endl;
                    if (a[si+i][sk+k] != b[i][k]) {
                        flag = false;
                    }
                }
            }
            if (flag == true) return true;
        }
    }

    return false;
}

int main() {
    cin >> n >> m;

    rep(i, n) {
        rep(k, n) {
            cin >> a[i][k];
        }
    }

    rep(i, m) {
        rep(k, m) {
            cin >> b[i][k];
        }
    }


    bool flag = judge();

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}

