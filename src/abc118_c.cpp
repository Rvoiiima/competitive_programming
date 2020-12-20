#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    ll  tmp, r;
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  } else if (a==b) {
      return a;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }

  return b;
}

int main(void) {
    ll n;
    ll a[200000];
    scanf("%lld", &n);
    for (ll i=0; i<n; i++) {
        scanf("%lld", &a[i]);
    }

    ll ans = 10000000000;
    ll dummy;

    for (ll i=0; i<n-1; i++) {
        dummy = gcd(a[i], a[i+1]);
        ans = min(ans, dummy);
    }
    if (n>=2) {
        printf("%lld\n", ans);
    }else {
        printf("%lld\n", a[0]);
    }

}
