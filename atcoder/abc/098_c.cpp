#include <iostream>
#include <cstdio>
#include <string>
#define ll long long 
using namespace std;

int main() {
    ll n;
    string s;

    scanf("%lld", &n);
    cin >> s;

    ll w = 0;
    ll e = 0;

    for(ll i=0; i<n; i++) {
        if(s[i] == 'E') {
            e ++;
        }
    }
    
    ll ans = w+e;

    for (ll i=0; i<n; i++) {
        if(s[i] == 'W') {
            w ++;
        } else {
            e --;
        }

        ans = min(ans, w+e);
    }
    
    printf("%lld\n", ans);
}
    
