#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define MAXV 1000
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

vector<ll> G[MAXV];

/*
struct edge {int to, cost; };
vector<edge> G[MAXV];
*/

int color[MAXV];
int V, E; 
bool dfs(int v, int c) { // 頂点vをcで塗る
    color[v] = c;
    for(int i=0; i <G[v].size(); ++i) {
        if (color[G[v][i]] == c) return false;
        if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) return false;
    }

    return true;
}

void solve() {
    rep(i, V) {
        if(color[i] == 0) {
            if (!dfs(i, 1)) {
                cout << "No" << endl;
                return;
            }
            
        }
    }
    cout << "Yes" << endl;
}

int main() {
    cin >> V >> E;
    rep(i, E) {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }
    /*
    */



}

