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
#define MAX 105
#define MAXW 10005

int N, W;
int v[MAX], w[MAX];
int  dp[MAX][MAXW];

void solve() {
    for(int i=0; i<N; i++) {
        for(int j=0; j<=W; j++) {
            if(j < w[i]) {
                dp[i+1][j] = dp[i][j];
            } else {
                dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]]+v[i]);
            }
        }
    }
    cout << dp[N][W] << endl;
}

int main() {
    cin >> N >> W;

    for (int i=0; i<N; i++) {
        cin >> v[i] >> w[i];
    }

    solve();
}
