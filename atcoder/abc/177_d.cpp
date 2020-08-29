#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 200005
#define MAXM 200005

int par[MAXN];
int rnk[MAXN];
int siz[MAXN];

void init(int n) {
    for(int i = 0; i < n; i++) {
        par[i] = i; // 自分自身が親 = representative
        siz[i] = 1;
        rnk[i] = 0;
    }
}

int root(int x) {
    if(par[x] == x) {
        return x;
    } else {
        return par[x] =
                   root(par[x]); // par[x] =  で親を付け替え 再帰的にrootを検索
    }
}

bool same(int x, int y) { return root(x) == root(y); }

ll size(int x) {
    x = root(x);
    return siz[x];
}

void unite(int x, int y) {
    // find representatives
    x = root(x);
    y = root(y);

    if(x == y)
        return;

    if(rnk[x] < rnk[y]) {
        siz[y] += size(x);
        par[x] = y;
        // cout << "size of" << x << " " << ;
    } else {
        siz[x] += size(y);
        par[y] = x;

        if(rnk[x] == rnk[y])
            ++rnk[x];
    }
}

int main() {
    int N, M, A, B;

    cin >> N >> M;
    init(N + 1);
    for(int i = 0; i < M; i++) {
        cin >> A >> B;
        A--;
        B--;
        unite(A, B);
    }

    ll ans = 0;
    for(int i = 0; i < N; ++i) {
        ans = max(size(i), ans);
    }
    cout << ans << endl;
}
