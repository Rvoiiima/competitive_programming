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

// 素因数分解する 
// たとえば 60 = 2^2 x 3 x 5 だったら {(2, 2), (3, 1), (5, 1)} を返す
vector<pair<ll, ll> > prime_factorize(ll n) {
    vector<pair<ll, ll> > res;
    for (ll p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
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


ll n;
int main() {
    cin >> n;
    auto pf = prime_factorize(n);
    ll j;
    ll ans = 0;
    vector<int> li(50);
    ll t = 0;
    for(int i=0; i<50; ++i) {
        t += i;
        li[i] = t;
    }

    for(int i=0; i<pf.size(); ++i) {

        int j = 1;
        while(pf[i].second > li[j]) {
            if (li[j+1] > pf[i].second) break;
            ++j;
        }
        ans += j;

    }

    cout << ans << endl;
}
