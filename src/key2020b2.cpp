#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define MAXL 1000000000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll n;
vector<P> x;

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}


int main() {
    cin >> n;
    ll tmp_f, tmp_s, tmp;
    rep(i, n) {
        cin >> tmp_f >> tmp_s;
        tmp = tmp_f-tmp_s;
        if (tmp<0) tmp = 0;
        x.push_back(make_pair(tmp, tmp_f+tmp_s));
    }

    sort(x.begin(), x.end(), pairCompare);

    
    ll ans = 0, t = -1;
    for(int i=0; i<n; ++i) {
        if (t <= x[i].first) {
            ++ans;
            t = x[i].second;
        }
    }

    cout << ans << endl;
}

