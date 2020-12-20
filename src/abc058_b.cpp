#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    string O, E;
    cin >> O;
    cin >> E;
    string ans= "";
    int l = O.length() + E.length();

    for(int i=0; i<=l; i++) {
        if ((i+1)%2 == 1) ans += O[i/2];
        else ans += E[i/2];
    }

    cout << ans;
}
