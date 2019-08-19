#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 110
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

char be[MAXN][MAXN];
char af[MAXN][MAXN];
char ch[MAXN][MAXN];

int main() {
    int h,w;
    cin >> h >> w;

    rep(i, h) {
        rep(k, w) {
            cin >> be[i][k];
            af[i][k] = '#';
        }
    }

    int dx[9] = {-1, 0, +1, -1, 0, +1, -1, 0, +1};
    int dy[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};

    for(int i=0; i<h; ++i) {
        for(int k=0; k<w; ++k) {
            if (be[i][k] == '.') {
                for(int a=0; a<9; ++a) {
                    int cx = k+dx[a], cy = i+dy[a];
                    if (cx >= 0 and cx < w and cy >= 0 and cy < h) {
                        af[cy][cx] = '.';
                    }
                }
            }
        }
    }
    
    int ch_ans = true;
    rep(i, h) {
        rep(k, w) {
            int ch_ins = false;
            for(int a=0; a<9; ++a) {
                int cx = k+dx[a], cy = i+dy[a];
                if (cx >= 0 and cx < w and cy >= 0 and cy < h) {
                    if (af[cy][cx] == '#') ch_ins = true;
                }
            }
            if (ch_ins) ch[i][k] = '#';
            else ch[i][k] = '.';
        }
    }

    rep(i,h) {
        rep(k, w) {
            if ( ch[i][k] != be[i][k]) ch_ans = false;
        }
    }

    if (ch_ans) {
        cout << "possible" << endl;
        rep(i,h) {
            rep(k, w) {
                cout << af[i][k];
            }
            cout <<endl;
        }
    } else {
        cout << "impossible" << endl;
    }
}

