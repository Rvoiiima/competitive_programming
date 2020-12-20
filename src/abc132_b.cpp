#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int main() {
    int n;
    int p[21];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> p[i];
    }

    int ans=0;
    for (int i=1; i<n-1; i++) {
        if ((p[i-1] < p[i] && p[i] < p[i+1]) or  (p[i-1] > p[i] && p[i] > p[i+1])) {
            ans++;
        }
    }
    cout << ans << endl;
}

