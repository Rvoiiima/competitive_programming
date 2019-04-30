#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    int n, k;
    int h[MAXN];

    cin >> n >> k;
    for(int i=0; i<n; i++) {
        cin >> h[i];
    }

    ll cost[MAXN];
    cost[1] = abs(h[1] - h[0]);

    ll min_cost;
    for(int i=2; i<n; i++) {
        min_cost = 1000000;

        for(int j=1; j<=k; j++) {
            if (i-j < 0) break;
            min_cost = min(min_cost, cost[i-j] + abs(h[i] - h[i-j]));
        }
        cost[i] = min_cost;
    }

    cout << cost[n-1] << endl;
}
