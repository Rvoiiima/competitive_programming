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

char s[505][505];
char t[505][505];

int n;

int compare(char s[][505], char t[][505]) {
    int cnt = 0;
    rep(i, n) {
        rep(j, n) {
            if(s[i][j] != t[i][j]) {
                cnt ++;
            }
        }
    }
    return cnt;
}

int compare_right(char s[][505], char t[][505]) {
    int cnt = 1;
    
    rep(i, n) {
        rep(j, n) {
            if(s[j][n-i-1] != t[i][j]) {
                cnt ++;
            }
        }
    }
    return cnt;
}

int compare_left(char s[][505], char t[][505]) {
    int cnt = 1;
    
    rep(i, n) {
        rep(j, n) {
            if(s[n-j-1][i] != t[i][j]) {
                cnt ++;
            }
        }
    }

    return cnt;
}

int compare_down(char s[][505], char t[][505]) {
    int cnt = 2;
    
    rep(i, n) {
        rep(j, n) {
            if(s[n-i-1][n-j-1] != t[i][j]) {
                cnt ++;
            }
        }
    }

    return cnt;
}

int main() {
    cin >> n;

    rep(i, n) {
        rep(j, n) {
            cin >> s[i][j];
        }
    }

    rep(i, n) {
        rep(j, n) {
            cin >> t[i][j];
        }
    }

    int ans = 1000000;
    int tmp;

    tmp = compare(s, t);

    ans = min(tmp, ans);

    tmp = compare_right(s,t);

    ans = min(tmp, ans);

    tmp = compare_left(s,t);

    ans = min(tmp, ans);

    tmp = compare_down(s,t);
    ans = min(tmp, ans);

    cout << ans << endl;

}

