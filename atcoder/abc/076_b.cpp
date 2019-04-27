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

int main() {
    int n, k;
    int ans = 1;

    cin >> n >> k;
    for(int i=0; i<n; i++) {
        if (ans < k) {
            ans *= 2;
        } else {
            ans += k;
        }
    }
    cout << ans << endl;
}
