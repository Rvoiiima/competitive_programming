#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int a[MAXN][3];
int h[MAXN][3];
int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; ++i) {
        for(int j=0; j<3; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<N; ++i){
        for(int j=0; j<3; ++j) {
            for(int k=0; k<3; ++k) {
                if(j!=k) chmax(h[i+1][j], h[i][k]+a[i][j]);
            }
        }
    }

    cout << max(h[N][0], max(h[N][1], h[N][2])) << endl;
}
