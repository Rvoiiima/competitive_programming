#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define ll long long

using namespace std;

int main(void) {
    int n, k;
    ll h[100000];

    ll ans = 10000000000;

    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++) {
        scanf("%lld", &h[i]);
    }

    sort(h, h+n);

    for(int i=k-1; i<n; i++) {
        ans = min(h[i]-h[i-k+1], ans);
    }

    printf("%lld\n", ans);

}
