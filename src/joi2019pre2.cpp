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

int x_num[110], a;

int main() {
    int n, m, tmp;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> x_num[i];
    }


    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> a;
        if (x_num[a+1] != x_num[a]+1 and x_num[a] != 2019) x_num[a] ++;
    }

    for(int i=0; i<n; i++) {
        cout << x_num[i+1] << endl;
    }
}

