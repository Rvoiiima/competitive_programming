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
    int a, b;
    cin >> a >> b;

    int x1 = 100 * (a+7) / 8;
    int x2 = 10 * b;

    int ans = -1;

    int minx = min(x1, x2);
    int maxx = max(x1, x2);

    for(int i = minx; i <= maxx; ++i) {
        int r1 = i*0.08;
        int r2 = i*0.1;
        if (r1 == a and r2 == b) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}

