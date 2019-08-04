#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
const ll mod = 1e9+7;


int main() {
    int n, h[MAXN];
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> h[i];
    }
    
    int ans = true;
    for(int i=n-1; i>0; --i) {
        if ( h[i] < h[i-1] ) {
            --h[i-1];
            if (h[i] < h[i-1]) {
                ans = false;
                break;
            }
        }
    }
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

