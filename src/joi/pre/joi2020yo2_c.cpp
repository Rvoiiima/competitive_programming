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

ll dp[MAXN];

ll sumdigit(ll num) {
    ll sum = 0;
    ll dig = 0;
    while(num){
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    dp[0] = 1;
    for(int i=1; i<n+1; ++i) {
        
        dp[i] ++;
        dp[sumdigit(i)+i] += (dp[i]);
    }

    cout << dp[n] << endl;
}

