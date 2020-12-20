#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int flag[MAXN];
int num[MAXN];
int main() {

    int n, m;

    for(int i=1; i<MAXN; i*=2) {
        for(int j=i; j<MAXN; j*=3) {
            for(int k=j; k<MAXN; k*=5) {
                flag[k] = 1;
            }
        }
    }

    for(int i=1; i<MAXN; ++i) {
        num[i]=num[i-1]+flag[i];
    }

    while(cin >> m >> n, m) { // if (m>0)
        cout << num[n]-num[m-1] << endl;
    }
}

