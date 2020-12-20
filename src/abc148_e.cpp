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
 
int main() {
    ll n;
    cin >> n;
    ll ans=0;
 
    ll five = 5;
 
    while(five*2<=n) {
        if (n%five == 0) {
            ans += n/(2*five);
        } else {
            if(n%2 == 0) {
                ans += n/(2*five);
            } else {
                ans += n/(2*five) +1;
            }
        }
        five *= 5;
    }

    if (n%2 == 1) ans = 0;
    cout << ans << endl;
}
 
