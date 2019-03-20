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
#define MAXN 100002
#define MAXM 100002


int par[MAXN];
int rnk[MAXN];
int  siz[MAXN];

void init(int n) {
    for(int i=0; i<n; i++) {
        par[i] = i; // 自分自身が親 = representative
        siz[i] = 1;
        rnk[i] = 0;
    }
}

int root(int x) {
    if(par[x] == x) return x;
    else return par[x] = root(par[x]); // par[x] =  で親を付け替え 再帰的にrootを検索
}

bool same(int x, int y) {
    return root(x) == root(y);
}

ll size(int x) {
    x = root(x);
    return siz[x];
}

void unite(int x, int y) {
    //find representatives
    x = root(x);
    y = root(y);
    
    if (x == y) return;

    if (rnk[x] < rnk[y]) {
        par[x] = y; 
        siz[y] += size(x);
    } else { 
        par[y] = x;
        siz[x] += size(y);

        if (rnk[x] == rnk[y]) ++rnk[x];
    }
}

int main() {
    int N,M, A[MAXM], B[MAXM];
    ll ans[MAXM];
    
    cin >> N >> M;

    init(N);
    for(int i=0; i<M; i++) {
        cin >> A[i] >> B[i];
    }
    ans[M] = N * (N-1) / 2;
    for(int i=M-1; i>=0; i--) {
        if (same(A[i], B[i])) {
            ans[i] = ans[i+1];
        } else {
            ans[i] = ans[i+1] - (size(A[i]) * size(B[i]));

            cout << "a, b: " << size(A[i]) << " " << size( B[i-1]) << endl;
        }

        unite(A[i], B[i]);
    }

    for(int i=1; i<=M; i++) {
        cout << ans[i] << endl;
        cout << "a, b: " << A[i-1] << " " << B[i-1] << endl;
    }
}

