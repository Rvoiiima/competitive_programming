#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 20020
#define MAXE 50050
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int par[MAXN];
int rnk[MAXN];

void init(int n) {
    for(int i=0; i<n; i++) {
        par[i] = i; // 自分自身が親 = representative
        rnk[i] = 0;
    }
}

int find(int x) {
    if(par[x] == x) return x;
    else return par[x] = find(par[x]); // parx[x] =  で親を付け替え 再帰的にrootを検索
}

bool same(int x, int y) {
    return find(x) == find(y);
}

void unite(int x, int y) {
    //find representatives
    x = find(x);
    y = find(y);
    
    if (x == y) return;

    if (rnk[x] < rnk[y]) {
        par[x] = y; //xの方がrank低い => xをyを親として付け足す
    } else { 
        par[y] = x;
        if (rnk[x] == rnk[y]) ++rnk[x];
    }
}

struct edge{ int u, v, cost; };

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

edge es[MAXE];
int V, E;

int kruskal() {

    sort(es, es+E, comp);
    init(V);
    int res = 0;
    rep(i, E) {
        edge e = es[i];
        if (!same(e.u, e.v)) {
            unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}
int N, M, R;
int x[MAXE], y[MAXE], d[MAXE];

int main() {
    int times;
    cin >> times;
    rep(re, times) {
        cin >> N >> M >> R;
        rep(i, R) {
            cin >> x[i] >> y[i] >> d[i];
        }

        V = N + M;
        E = R;
        rep(i, R) {
            es[i] = (edge){x[i], N+y[i], -d[i]};
        }
        cout << 10000* (N+M) + kruskal() << endl;
    }

}
