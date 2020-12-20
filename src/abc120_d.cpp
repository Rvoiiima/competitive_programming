#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define ll long long 
#define MAXN 100000
#define MAXM 100000
using namespace std;

int main(void) {
    ll N, M;

    scanf("%lld %lld", &N, &M);

    vector<ll> G[N];
    ll a, b;

    for(ll i=0; i<M; i++) {
        scanf("%lld %lld", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }






    ll n_0=0, n_1=0;

    for (ll i=0; i<size; i++) {
        if (s[i] == '0') n_0 ++;
        else n_1 ++;
    }

    printf("%d\n", min(n_0, n_1)*2);

        
}
