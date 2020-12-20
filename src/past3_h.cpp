#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;
const ll INF = 1000000000;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}

ll n, l;
ll d[MAXN];
bool h[MAXN];
ll t1, t2, t3;

int main() {
    cin >> n >> l;
    ll tmp;
    rep(i, n) {
        cin >> tmp;

        h[tmp] = true;
    }

    rep(i, l+4) {
        d[i] = INF;
    }

    cin >> t1 >> t2 >> t3;


    d[0] = 0;

    for(ll i=1; i<=l+3; ++i) {
        if (h[i]) {
            d[i] = min(d[i], d[i-1]+t1+t3);
            if(i-2>=0)  d[i] = min(d[i], d[i-2]+t1+t2+t3);
            if(i-4>=0)  d[i] = min(d[i], d[i-2]+t1+t2*3+t3);
        } else { 
        if (i <= l) d[i] = min(d[i], d[i-1] + t1);
        if (i-2>=0) d[i] = min(d[i],d[i-2] + t1 +t2);
        if (i-4>=0) d[i] = min(d[i],d[i-4] + t1 +t2*3);
        }
    }

    ll ans= d[l-1];

    for(int i=1; i<=3; ++i) {
        ans = min(ans, d[l+i]-t1/2-(t2/2)*(2*i-1));
    }

    cout << ans << endl;

}

