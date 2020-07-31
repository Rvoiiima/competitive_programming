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

    deque<char> que;

    rep(i, s.size()) {
        que.push_back(s[i]);
    }

    int rev = 0;

    rep(i, q) {
        cin >> t;
        if (t == 1) {
            rev = 1 - rev;

        }else{
            cin >> f >> c;

            if (rev) {
                if (f == 1) {
                    que.push_back(c);
                } else {
                    que.push_front(c);
                }
            } else {
                if (f == 1) {
                    que.push_front(c);
                } else {
                    que.push_back(c);
                }
            }
        }
    }

    if (rev) {
        reverse(que.begin(), que.end());
    }

    rep(i, que.size()) {
        cout << que[i];
    }


    cout << endl;

}

