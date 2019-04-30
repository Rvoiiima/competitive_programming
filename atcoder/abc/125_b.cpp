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
#define MAXN 20

int main() {
    int n;
    int c[20], v[20];

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    for(int i=0; i<n; i++) {
        cin >> c[i];
    }

    int ans =0;

    for(int i=0; i<n; i++) {
        if ((v[i] - c[i]) > 0 ) ans += (v[i] - c[i]);
    }

    cout << ans << endl;
}
        
