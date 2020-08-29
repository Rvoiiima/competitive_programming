#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int prime[MAXN]; // 素数を順に入れていく。要素数は後のp
bool is_prime[MAXN+1]; // is_prime[i]: iが素数かどうかのフラグ

int eratosthenes(int n) {
    int p = 0;
    for (int i=0; i<=n; ++i) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=n; ++i) {
        if(is_prime[i]) {
            prime[p++] = i;
            for(int j=2*i; j<=n; j+=i) is_prime[j] = false;
        }
    }
    return p;
}

int main() {
    int x;
    cin >> x;
    cout << eratosthenes(x) << endl;
}

