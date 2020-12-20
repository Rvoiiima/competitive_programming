#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int ans[4][2];
double r, l;


int judge(double view) {
    if ( view >= 1.1) return 0;
    else if (view < 1.1 && view >= 0.6) return 1;
    else if (view < 0.6 && view >= 0.2) return 2;
    else return 3;
}

int main() {
    while (cin >> l >> r) {
        ans[judge(l)][0] ++;
        ans[judge(r)][1] ++;
    }

    for(int i=0; i<4; ++i) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}

