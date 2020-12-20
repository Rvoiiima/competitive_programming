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
    ll n, k;
    cin >> n;
    cin >> k;
    ll tmp1, tmp2;
    ll mintmp;

    rep(i, k) {
        cin >> tmp1 >> tmp2;
        if (tmp1 > n/2) tmp1 = n-tmp1+1;
        if (tmp2 > n/2) tmp2 = n-tmp2+1;


        mintmp = min(tmp1, tmp2);


        switch(mintmp%3){
            case 1:
            cout << 1 << endl;
            break;
            case 2:
            cout << 2 << endl;
            break;
            case 0:
            cout << 3 << endl;
            break;
            default:
            break;
        }
    }

}

