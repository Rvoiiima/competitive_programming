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
    string S;
    cin >> S;

    string divide[4] = {
        "dream",
        "dreamer",
        "erase",
        "eraser"
    };

    reverse(S.begin(), S.end());

    rep(i,4) {
        reverse(divide[i].begin(), divide[i].end());
    }

    bool ans = true;

    for(int i=0; i<S.size(); ) {
        bool can = false;

        for(int j=0; j<4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) {
                can = true;
                i += d.size();
            }
        }

        if (!can) {
            ans = false; 
            break;
        }
    }

    cout << ((ans == true) ? "YES" : "NO") << endl;
}

