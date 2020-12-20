#include <cstdio>
#include <iostream>
#include <deque>
#define ll long long 
using namespace std;

int main() {
    ll n;
    ll num;

    deque<ll> b;
    scanf("%lld", &n);

    for (ll i=1; i<=n; i++) {
        scanf("%lld", &num);
        if (i%2 == n%2) {
            b.push_front(num);
        } else {
            b.push_back(num);
        }
    }

    for(deque<ll>::iterator it = b.begin(), e=b.end(); it != e; ++it) {
        printf("%lld ", *it);
    }

    printf("\n");
}
