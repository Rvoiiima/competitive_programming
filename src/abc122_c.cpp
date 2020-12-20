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
    int N, Q;
    string S;
    int l, r;
    cin >> N >> Q;
    cin >> S;

    int t[MAX], cnt=0;
    for(int i=0; i<N-1; i++) {
        if(S[i] == 'A' && S[i+1] == 'C') cnt ++;
        t[i+1] = cnt;
    }

    for(int i=0; i<Q; i++) {
        cin >> l >> r;
        cout << (t[r-1] - t[l-1]) << endl;
    }
}
