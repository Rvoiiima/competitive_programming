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

int memo[MAXN];
int N;

int f(int i) {
    int res = 10000000;

    if (i==0) return 0;
    if (memo[i]) return memo[i];

    //1 yen

    chmin(res, f(i-1) + 1); 

    //6 yen

    int x=6;

    while(x<=i) {
        chmin(res, f(i-x)+1);
        x *= 6;
    }

    //9 yen

    x = 9;

    while(x<=i) {
        chmin(res, f(i-x)+1);
        x *= 9;
    }

    return memo[i] = res;
}

int main() {
    cin >> N;
    cout << f(N) << endl;

}

