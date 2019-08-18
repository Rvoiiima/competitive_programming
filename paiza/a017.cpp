#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 31
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

char G[MAXN][MAXN];

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    rep(i, H+1) {
        rep(k, W+1) {
            G[i][k] = '.';
        }
    }
    int h, w, x;
    rep(a, N) {
        cin >> h >> w >> x;
        int maxh=0;
        for(int i=0; i<H; i++) {
            for(int k=x; k<x+w; ++k) {
                if (G[i][k] == '#') maxh = i+1;
            }
        }


        for(int i=maxh; i<maxh+h; ++i) {
            for(int k=x; k<x+w; ++k) {
                G[i][k] = '#';
            }
        }
    }

    for(int i=H-1; i>=0; --i) {
        rep(k, W) {
            cout << G[i][k];
        }
        cout << endl;
    }
}

