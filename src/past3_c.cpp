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

ll a, r, n;
bool flag = false;

int main() {
    cin >> a >> r >> n;
    rep(i, n-1) {
        a *= r;
        if (a > 1000000000) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "large" << endl;
    } else {
        cout << a << endl;
    }
}

