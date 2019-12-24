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

int main() {
    int a, b;
    cin >> a >> b;
    int flag[3];
    rep(i, 3) {
        flag[i] = 1;
    }
    --a;
    --b;
    flag[a] = 0;
    flag[b] = 0;
    
    rep(i, 3) {
        if(flag[i]) cout << i+1 << endl;
    }
}

