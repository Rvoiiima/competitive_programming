#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;
vector<int> P;
bool is_prime[100010];

void Eratosthenes( const int N )
{
    rep(i, N) {
        is_prime[i] = true;//初期化
    }    
    for(int i=2; i<=N; i++) {
        if( is_prime[i] ){
            for(int j=2*i; j<=N; j+=i) {
                is_prime[j] = false;
            }
            P.push_back(i);
        }
    }
}

int main() {
    Eratosthenes(100010);

    int n, a;
    while (cin>>n, n) {
        int ans = 0;
        for(int i=0; P[i]<=n/2; ++i) {
            a = P[i];
            if(is_prime[n-a]) ++ans;
        }
        cout << ans << endl;
    }
}

