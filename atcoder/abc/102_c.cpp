#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#define ll long long 
using namespace std;

// this program had overflow problem. we need to use long long value over 10^9.

int main() {
    ll n, i, sum=0, dummy, med, A;
    scanf("%lld", &n);
    vector<ll> a(n+1);

    for(i=1; i<=n; i++) {
        scanf("%lld", &A);
        a[i] = A-i;
    }
    
    sort(a.begin() + 1, a.end());

    med = a[n/2+1];

    for(i=1; i<=n; i++) {
        sum += abs(a[i]-med);
    }

    printf("%lld\n", sum);
}
