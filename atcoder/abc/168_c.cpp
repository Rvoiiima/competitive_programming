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
    int a, b, h, m;

    cin >> a >> b >> h >> m;

    float l, s, ang;

    l = 30 * h + m * 0.5;
    s = 6 * m;

    ang = abs(l-s);

    float rad = PI*ang / 180;

    float c = sqrt(a*a + b*b - 2* a* b* cos(rad));

    if (ang == 0) {
        c = abs(a-b);
    } else if (ang == 180) {
        c = a+b;
    }
    cout << std::fixed << std::setprecision(15) << c << endl;





}

