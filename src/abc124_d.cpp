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

vector<ll> d;

int main() {
    ll n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    if (s[0] == '0') d.push_back(0);
    
    ll cnt = 0;
    rep(i, n) {
        ++cnt;
        if (s[i] != s[i+1]) {
            d.push_back(cnt);
            cnt = 0;
        }
    }

    if (cnt != 0) d.push_back(cnt);

    if (s[n-1] == '0') d.push_back(0);

    ll ans = -1;

    vector<ll> sum((int)d.size()+1, 0);

    for(int i=0; i<d.size(); ++i) sum[i+1] = sum[i] + d[i];

    for(int left=0; left<sum.size(); left+=2) {
        int right = left + 2*k+1;

        if (right>sum.size()) right =(int) sum.size()-1;

        ans = max(ans, sum[right]-sum[left]);
    }

    cout << ans << endl;

        
}

