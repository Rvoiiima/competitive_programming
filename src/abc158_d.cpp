#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}

int main() {
    string s;
    ll q;

    cin >> s;
    cin >> q;

    int t, f;
    char c;

    vector<char> sento;
    vector<char> matubi;

    int rev = 0;

    rep(i, q) {
        cin >> t;
        if (t == 1) {
            rev = 1 - rev;

        }else if (t == 2) {
            cin >> f >> c;

            if (rev == 0) {
                if (f == 1) {
                    sento.push_back(c);
                } else {
                    matubi.push_back(c);
                }
            } else {
                if (f == 1) {
                    matubi.push_back(c);
                } else {
                    sento.push_back(c);
                }
            }
        }
    }

    if (rev) {

        reverse(matubi.begin(), matubi.end());

        rep(k, matubi.size()) {
            cout << matubi[k];
        }

        reverse(s.begin(), s.end());
        rep(k, s.size()) {
            cout << s[k];
        }
        rep(k, sento.size()) {
            cout << sento[k];
        }



    } else {
        reverse(sento.begin(), sento.end());

        rep(k, sento.size()) {
            cout << sento[k];
        }

        rep(k, s.size()) {
            cout << s[k];
        }

        rep(k, matubi.size()) {
            cout << matubi[k];
        }
    }


    cout << endl;

}

