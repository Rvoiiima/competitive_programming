#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


vector<string> S;
int main() {
    int n;
    string s;
    cin >> n;
    rep(i, n) {
        cin >> s;
        sort(s.begin(), s.end());
        S.push_back(s);
    }

    sort(S.begin(), S.end());
    ll ans = 0;
    ll tmp = 0;
    rep(i, n) {
        if(S[i] == S[i+1]) {
            tmp ++;
        } else {
            if (tmp) {
            ans += tmp*(tmp+1)/2;
            tmp = 0;
            }
        }
    }

    if (tmp) {
        ans += tmp*(tmp+1)/2;
    }

    cout << ans << endl;
}

