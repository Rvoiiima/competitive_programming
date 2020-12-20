#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}

ll swap(ll a, ll b) {
    ll tmp;
    tmp = a;
    a = b;
    b = tmp;
}
ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a, b);
}

int prime[MAXN];
bool is_prime[MAXN+1];

vector<ll> p;

ll eratosthenes(ll n) {
    ll p = 0;
    for (ll i=0; i<=n; ++i) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(ll i=2; i<=n; ++i) {
        if(is_prime[i]) {
            prime[p++] = i;
            for(ll j=2*i; j<=n; j+=i) is_prime[j] = false;
        }
    }
    return p;
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll ab = gcd(a, b);

    ll num_prime = eratosthenes(ab);
    ll ans = num_prime;

    rep(i, num_prime) {
        cout << prime[i] << endl;
    }


    cout << ans << endl;
        
}

