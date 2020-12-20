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
    int n;
    string name;
    cin >> n;
    cin >> name;
    int len_n = name.length();

    string s;

    int cnt=0;

    rep(x, n) {
        cin >> s;
        int len_s = s.length();
        rep(start, len_s) {
            for(int step=1; start+(len_n-1)*step <len_s; ++step) {
                for(int i=0; i<len_n; ++i) {
                    if (s[start+i*step] != name[i]) {
                        goto fail;
                    }
                }

                cnt ++;
                goto nextk;
            fail:;
            }
        }
        nextk:;
    }
    cout << cnt << endl;
}

