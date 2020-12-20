#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 51
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

vector<string> m;
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

int main() {
    int h, w;
    cin >> h >> w;

    string s;
    for(int i=0; i<h; ++i){
        cin >> s;
        m.push_back(s);
    }

    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            if(m[i][j] == '.') {
                int cnt = 0;
                for(int k=0; k<8; ++k) {
                    if ( i+dy[k] >= 0 and i+dy[k] < h and j+dx[k] >= 0 and j+dx[k] < w) {
                        if(m[i+dy[k]][j+dx[k]] == '#') ++cnt;
                    }
                }
                m[i][j] = '0'+cnt;
            }
        }
    }

    for(int i=0; i<h; ++i) {
        cout << m[i] << endl;
    }
}

