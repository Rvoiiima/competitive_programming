#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int swap(int a, int b) {
}
int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    ll a[MAXN];
    int n;
    int count_nega=0;
    bool zero = false;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if ( a[i] < 0) {
            count_nega ++;
            a[i] = abs(a[i]);
        } else if (a[i] == 0) {
            zero = true;
        }
    }

    
    if ( count_nega %2 == 0 || zero ) {
    } else {

        sort(a, a+n);
        a[0] = -1 * a[0];
        
    }

    ll ans = 0;
    for(int i=0; i<n; i++) {
        ans += a[i];
    }
        
    cout << ans << endl;
}

