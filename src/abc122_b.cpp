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
    string S;
    cin >> S;
    int ans = 0, a = 0;
    for (int i=0; i<S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'T' || S[i] == 'G' || S[i] == 'C') {
            a++;
        }else {
            ans = max(ans, a);
            a = 0;
        }
    }
    ans = max(ans, a);
    cout << ans << endl;

}
