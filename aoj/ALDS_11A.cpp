#include <iostream>
#include <vector>
#define MAXN 100
using namespace std;

int main() {
    int n, u, k, v;
    cin >> n;
    vector<int> G[MAXN];

    for(int i=0; i<n; i++) {
        cin >> u >> k;
        u--;
        for (int j=0; j<k; j++) {
            cin >> v;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
        }
    }

    for(int i=0; i<n; i++) {
        for(vector<int>::iterator it = G[i].begin(); itr != v.end(); ++itr) {
            if 
        }
        cout << endl;
    }
}

            


