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
#define MAX 100001

int main() {

    int N, M;
    int P[MAX], Y[MAX];
    vector<int> G[MAX];

    cin >> N >> M;

    for(int i=0; i<M; i++) {
        cin >> P[i] >> Y[i];
        G[P[i]].push_back(Y[i]);
    }

    for(int i=0; i<N; i++) {
        sort(G[i+1].begin(), G[i+1].end());
    }

    for(int i=0; i<M; i++) {
        printf("%06d%06d\n", P[i], int(lower_bound(G[P[i]].begin(), G[P[i]].end(), Y[i]) - G[P[i]].begin() +1));

    }
}
