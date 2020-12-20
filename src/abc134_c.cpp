#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 200001

ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int n, a[MAXN], b[MAXN],  maxa, nexta;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b+n, std::greater<int>());
    maxa = b[0];
    nexta = b[1];

    if (maxa == nexta) {
        for(int i=0; i<n; i++) {
            cout << maxa << endl;
        }
    } else {

        for(int i=0; i<n; i++) {
            if (maxa == a[i]) cout << nexta << endl;
            else cout << maxa << endl;
        }
    }

}

