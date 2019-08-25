#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 21
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    int N;
    int B[MAXN];
    int M[MAXN];
    int maxm[MAXN];
    int minm[MAXN];

    cin >> N;
    vector< vector<int> >sub(N);

    B[0] = -1;

    rep(i, N-1){
        cin >> B[i+1];
        --B[i+1];
    }
    /*
    for(int i=N-1; i>=0; --i) { // boss number
        for(int k=i+1; k<N; ++k) { // search sub number
            if(B[k] == i) sub[i].push_back(k);
        }
    }
    */

    for(int i=1; i<N; ++i) {
        sub[B[i]].push_back(i);
    }

    for(int i=N-1; i>=0; --i) {
        if (sub[i].size() == 0) {
            M[i] = 1;
            continue;
        }
        maxm[i] = 0; minm[i] = (int)INF;
        for(int j:sub[i]) {
            maxm[i] = max(maxm[i], M[j]);
            minm[i] = min(minm[i], M[j]);
        }
        M[i] = maxm[i] + minm[i] + 1;
    }

    cout << M[0] << endl;

}

