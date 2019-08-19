#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 10000000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

bool is_prime[MAXN+1];
int num[MAXN+1];

int eratosthenes(int n) {
    int p = 0;
    for (int i=0; i<=n; ++i) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=n; ++i) {
        if(is_prime[i]) {
            p++;
            for(int j=2*i; j<=n; j+=i) is_prime[j] = false;
        }

        num[i] = p;
    }
        
    return p;
}

int main() {
    int x, y;

    eratosthenes(10000000);
    
    while (cin >> x >> y ) {
        if(x==0 and y==0) break;
        cout << num[y] - num[max(0,x-1)] << endl;
    }
}

