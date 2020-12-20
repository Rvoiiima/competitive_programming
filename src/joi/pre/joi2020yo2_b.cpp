#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

#define P pair<ll, ll>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<P >s;

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second > secondElof.second;
}

int main() {
    int n;

    cin >> n;

    int a, t;

    rep(i, n) {
        cin >> a >> t;
        s.push_back(make_pair(a, t));
    }

    sort(s.begin(), s.end(), pairCompare);
    int time = 0;
    int posi = 0;
    ll a_max = s[0].first;

    rep(i, n) {
        a_max = max(s[i].first, a_max);
    }

    ll ans = max(a_max*2, s[0].second + s[0].first);

    cout << ans << endl;


}

