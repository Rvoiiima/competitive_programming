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
ll a[MAXN];
bool check[MAXN];

int main() {
    int n;
    int ans=0;
    cin >> n;

    rep(i,n) {
        cin >> a[i];
    }

    sort(a, a+n);


    rep(i, n) {
        bool flag = true;
        if (a[i]==a[(i+1)]) {
            flag = false;
        }
        if (i==n-1){
            if (a[i-1]==a[i]) flag = false;
        }
        rep(k, a[i]) {
            if (check[k] == true) {
                if (a[i]%k == 0) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            ans ++;
        }

        check[a[i]] = true;
    }

    cout << ans << endl;

}

