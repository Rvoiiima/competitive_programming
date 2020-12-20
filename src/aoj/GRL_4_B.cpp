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
#define MAX 10000

int V, E;
vector<int> G[MAX];
vector<int> out;
int integ[MAX];
bool color[MAX];

void bfs(int s) {
    queue<int> Q;
    Q.push(s);
    color[s] = true;

    while(!Q.empty()) {
        int u = Q.front(); Q.pop();
        
        out.push_back(u);

        for(int i=0; i<G[u].size(); i++) {
            int v = G[u][i];
            integ[v] --;

            if( integ[v] ==  0 && color[v] == false) {
                color[v] = true;
                Q.push(v);
            }
        }
    }
}

void tsort() {
    for(int i=0; i<V; i++) {
        for(int j=0; j<G[i].size(); j++) {
            integ[G[i][j]] ++;
        }
    }

    for(int i=0; i<V; i++) {
        if (integ[i] == 0 && color[i] == false) {
            bfs(i);
        }
    }
}

int main() {
    int s,t;

    cin >> V >> E;

    for(int i=0; i<V; i++) {
        color[i] = false;
    }

    for(int i=0; i<E; i++) {
        cin >> s >> t;
        G[s].push_back(t);
    }

    tsort();

    for(vector<int>::iterator it= out.begin(); it != out.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
