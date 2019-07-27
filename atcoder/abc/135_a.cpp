#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    int a, b;
    cin >> a >> b;
    int ans = a+b;

    if ( ans % 2 ==0 ) {
        cout << (a+b)/2 << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

}

