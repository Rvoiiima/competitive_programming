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
    int x;
    cin >> x;
    int N = x/100;
    int ans = x - N * 100;
    int l[5] = {5, 4, 3, 2, 1};
    int cnt = 0;
    rep(i, 5) {
        while(1) {
            if (ans - l[i] < 0) break;
            ans -= l[i];
            cnt ++;
        }
    }

    if (ans == 0 and cnt <= N) {
        cout << "1" << endl;
    }else {
        cout << "0" << endl;
    }
    
}

