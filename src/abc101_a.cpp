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
    int ans=0;
    string s;
    cin >> s;
    for(int i=0; i<4; i++) {
        if (s[i] == '+') ans ++;
        else ans --;
    }
    cout << ans << endl;

}

