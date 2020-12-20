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
    int s;
    string ans;
    cin >> s;
    if (s==100) ans = "S";
    else if (s >= 70) ans = "A";
    else if (s >= 50) ans = "B";
    else ans = "C";
    cout << "Your grade is "+ans << endl;
}

