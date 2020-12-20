#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    int n;
    int d[MAXN];

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> d[i];
    }

    sort(d, d+n);

    int ans;
    ans = d[n/2] - (d[n/2-1]+1) +1;
    if ( ans < 0 )  ans = 0;
    cout << ans << endl;

}

