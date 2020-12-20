#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 200010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

vector<vector <int> > G;
vector<int> cost, ans;
int sum = 0;
void dfs(int cur = 1, int prev = 0) {
    sum += cost[cur]; // cur: 現在の位置。
    ans[cur] = sum;
    for(int i: G[cur]) { 
        if (i!=prev) { // 木なので親は2つ以上はない => prevで親を保存して更新しないようにする。
            dfs(i,cur);
        }
    }
    sum -= cost[cur]; // すべての子に対して足し終わったので引く。
}
int main() {
    int N, Q;
    cin >> N >> Q;

    G.resize(N+1);
    cost.resize(N+1);
    ans.resize(N+1);


    int a, b;


    rep(re, N-1) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int p, x;

    rep(i, Q) {
        cin >> p >> x;
        cost[p] += x;
    }

    dfs();
    

    for(int i=1; i<=N; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

