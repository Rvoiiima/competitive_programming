#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int n;
    int h[MAXN];

    cin >> n;
    ll cost[MAXN];
    for(int i=0; i<n; i++) {
        cin >> h[i];
        cost[i] = ll(INF);
    }

    cost[0] = 0;
    cost[1] = abs(h[1] - h[0]);

    for(int i=2; i<n; i++) {
        chmin(cost[i], cost[i-1]+abs(h[i]-h[i-1]));
        chmin(cost[i], cost[i-2]+abs(h[i]-h[i-2])); 
//        cout << cost[i] << endl;
    }

    cout << cost[n-1] << endl;

    
}

