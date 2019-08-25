#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

#define ll long long 
using namespace std;

int main(void) {
    ll k, a, b;

    scanf("%lld %lld %lld", &k, &a, &b);

    ll ans = 1;
//    k -= (a-1);

    if (a+2 < b) {
        //ans = k/(a+2) * b + k % (a+2);
        if ( k >= a-1 ) {
            k -= (a-1);
            ans += (a-1);
            ans += k/2 * (b-a) + k%2;
        } else {
            ans += k;
        }

    } else {
        ans += k;
    }

    printf("%lld\n", ans);
    
}
