#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    int cnt=0;
    ll amt=0;

    while(1){
        amt += a;
        cnt ++;
        if ( cnt % 7 == 0) amt += b;
        if (amt >= c) break;
    }

    cout << cnt << endl;


}

