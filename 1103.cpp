#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int prime[MAXN];
bool is_prime[MAXN+1];

int eratosthenes(int n) {
    int p = 0;
    for (int i=0; i<=n; ++i) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=n; ++i) {
        if(is_prime[i]) {
            prime[p++];
            for(int j=2*i; j<=n; j+=i) is_prime[j] = false;
        }
    }
    return p;
}

int main() {
    eratosthenes(MAXN);
    int x;
    while (cin >> x) {
        int ans=0;
        for(int i=0; prime[i] <= x; ++i) {
            for(int j=0; j <= i; ++j) {
                if (prime[i]+prime[j] == x) ++ans;
            }
        }
        cout << ans << endl;
    }
}

