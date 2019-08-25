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
#define MAX 200000

int main() {
    int n;
    string s;
    cin >>n;
    cin >> s;
    int left_black[MAX], right_white[MAX];
    int b=0, w=0;

    for(int i=0; i<n; i++) {
        
        if (s[i] == '#'){
            b++;
        } 

        if (s[n-1-i] == '.') {
            w++;
        }

        left_black[i] = b;
        right_white[n-1-i] = w;
    }


    int ans = MAX;

    for(int i=0; i<n-1; i++) {
        ans = min(ans, left_black[i] + right_white[i+1]);
    }

    ans = min(ans, left_black[n-1]);
    ans = min(ans, right_white[0]);

    cout << ans << endl;
}
        
