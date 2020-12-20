#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

ll f(ll x) {
    int bit;
    if (((x+1) / 2) % 2 == 1) {
        bit = 1;
    } else { 
        bit = 0;
    }

    if ( x%2 == 0 ) return bit ^ x;
    else return bit;
}


int main() {
    ll A, B;
    cin >> A >> B;
    ll ans = f(A-1) ^ f(B);
    cout << ans << endl;
}
