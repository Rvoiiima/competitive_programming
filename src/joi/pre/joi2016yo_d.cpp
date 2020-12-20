#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<pair<ll, ll> >ad;
int main() {
    ll n, t, q;
    cin >> n >> t >> q;

    ll tmp1, tmp2;

    rep(i, n) {
        cin >> tmp1 >> tmp2;
        ad.push_back(make_pair(tmp1, tmp2));
    }

    ll tmp;
    ll memstop[MAXN];

    rep(i, n) {
        memstop[i] = ll(EPS);
    }

    rep(i, ad.size()-1) {
        if (ad[i].second == 1 and ad[i+1].second == 2) {
            tmp = (ad[i].first+ad[i+1].first)/2;
        }

        for(ll cr1 = i; ad[cr1].second == 1 and cr1 >= 0; --cr1) {
            memstop[cr1] = tmp;
        }

        for(ll cr2 = i+1; ad[cr2].second == 2 and cr2 < n; ++cr2) {
            memstop[cr2] = tmp;
        }
    }

    ll result;
    rep(i, q) {
        cin >> tmp;
        --tmp;
        if(ad[tmp].second == 1) {
            result = ad[tmp].first + t;
            if (result >= memstop[tmp] && memstop[tmp]!=ll(EPS)) cout << memstop[tmp];
            else cout << result;
        } else {
            result = ad[tmp].first - t;
            if (result <= memstop[tmp] && memstop[tmp]!=ll(EPS)) cout << memstop[tmp];
            else cout << result;
        } 
        cout << endl;
    }
}

