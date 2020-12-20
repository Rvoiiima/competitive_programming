#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define ll long long 
using namespace std;

int main(void) {
    string s;
    cin >> s;
    ll size = s.length();

    ll n_0=0, n_1=0;

    for (ll i=0; i<size; i++) {
        if (s[i] == '0') n_0 ++;
        else n_1 ++;
    }

    printf("%d\n", min(n_0, n_1)*2);

        
}
