#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define MAXV 4000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

struct edge {
    int to, cost;
};

int V;
vector<edge> G[MAXV];
int d[MAXV];
int N, R;

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    rep(i, N) d[i] = INF;
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second;
        if ( d[v] < p.first ) continue;
        for(int i=0; i<G[v].size(); ++i) {
            edge e = G[i][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    cin >> N >> R;
    rep(i, R) {
        int s, t, w;
        cin >> s >> t >> w;
        --s; --t;

        G[s].push_back(edge{t, w});
        G[t].push_back(edge{s, w});
    }
    dijkstra(0);


    cout << d[N-1] << endl;


}

