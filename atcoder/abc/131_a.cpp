#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int swap(int a, int b) {
}
int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    string s;
    cin >> s;
    int ans = 1;
    if (s[0] == s[1] || s[1] == s[2] || s[2] ==s[3] ) {
        ans = 0;
    }

    if (ans) cout << "Good" << endl;
    else cout << "Bad" << endl;


}

