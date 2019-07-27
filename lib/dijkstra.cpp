#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1<<20)
#define PI (acos(-1))
#define MAX 10000
#define WHITE  0
#define GRAY  1
#define BLACK  2

int N;
vector< pair<int, int> > G[MAX]; // targetの先と、重みのペアが保存されている

void dijkstra(int s) { // sはスタート地点
    priority_queue<pair <int, int> > PQ;
    int color[MAX];
    int d[MAX]; // 最短距離を保存する

    for(int i=0; i<N; i++) {
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    PQ.push(make_pair(0, 0)); // d, vの順で入っている
    color[0] = GRAY;

    while (!PQ.empty()) {
        pair<int, int> f = PQ.top(); PQ.pop();
        int u = f.second;
        color[u] = BLACK;

        if (d[u] < f.first * (-1) ) continue;

        for (int j=0; j< G[u].size(); j++) {
            int v =  G[u][j].first; //　隣接する頂点の取り出し
            if ( color[v] == BLACK) continue;
            if ( d[v] > d[u] + G[u][j].second ) {
                d[v] = d[u] + G[u][j].second;
                PQ.push( make_pair(d[v] * (-1), v ));
                color[v] = GRAY;
            }
        }
    }
    for(int i=0; i<N; i++) {
        cout << i << " " << (d[i] == INF ? -1 : d[i])  << endl;
    }
}

int main() {
    int u, k, v, c;

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> u >> k;

        for(int j=0; j<k; j++) {
            cin >> v >> c;
            G[u].push_back(make_pair(v, c));
        }
    }

    dijkstra(0);
    return 0;
}
