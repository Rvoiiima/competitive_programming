#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    int k, x;
    cin >> k >> x;

    int start = max(-1*MAXN, x-(k-1));
    int end = min(MAXN, x+(k-1));

    for(int i = start; i<= end; i++) {
        cout << i << " ";
    }

    cout << endl;
}


