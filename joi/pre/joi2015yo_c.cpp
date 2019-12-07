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

int sky[101][101];

int main() {
    int h, w;
    cin >> h >> w;
    char c;

    rep(i, h) {
        rep(j, w) {
            cin >> c;
            if (c == 'c') sky[i][j] = 0;
            else sky[i][j] = -1;
        }
    }

    rep(i, h) {
        rep(j, w) {
            if(sky[i][j] != 0) continue;
            while (j+1 < w and sky[i][j+1] == -1) {
                j++;
                sky[i][j] = sky[i][j-1] + 1;
            }
        }
    }

  
    rep(i, h) {
        rep(j, w) {
            if (j) cout << " ";
            cout << sky[i][j];
        }
        cout << endl;
    }
}

