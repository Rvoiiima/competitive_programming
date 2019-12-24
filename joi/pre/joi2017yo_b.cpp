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

vector<int> a;
int main() {
    int n, m;
    int tmp;
    cin >> n >> m;
    
    rep(i, m) {
        cin >>tmp;
        a.push_back(tmp);
        cin >>tmp;
    }

    sort(a.begin(), a.end(), std::greater<int>());

    int ans=0;

    rep(i, m-1){
        ans += max(n-a[i], 0);
    }
    cout << ans << endl;

}

