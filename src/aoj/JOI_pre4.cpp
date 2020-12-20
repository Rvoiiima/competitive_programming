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
#define MAX 200
int main() {
    int D, N;
    cin >> D >> N;
    int T[MAX];
    vector< pair < pair<int, int> , int> > V;


    for(int i=0; i<D; i++) {
        cin >> T[i];
    }

    int A, B, C;
    int maxc[MAX], minc[MAX];
    int mi, ma;
    for(int i=0; i<N; i++) { //
        cin >> A >> B >> C;
        mi = 101; ma=-1;
        for(int k=0; k<D; k++) { //temp
            if (A <= T[k] && T[k] <= B) { //
                mi = min(mi, C);
                ma = max(ma, C);
            }
        }
        maxc[i] = ma; minc[i] = mi;
    }


    int ans = 0;

    for(int i=0; i<D-1; i++) {
        ans += max(abs(maxc[i]-minc[i+1]), abs(minc[i]-maxc[i+1]));
        cout << maxc[i]  << " " << minc[i] << endl;
    }

    cout << ans << endl;
    
}
