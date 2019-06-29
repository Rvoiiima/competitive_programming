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
    int N ,d ;
    vector<int> b;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> d;
        b.push_back(d);
    }

    vector<int> a;
    for(int j=N; j>0; j--) {
        for(int i=j-1; i>=0; i--) {
            if ((i+1) == b[i]) {
                a.push_back(b[i]);
                b.erase(b.begin() + i);
                break;
            }
        }
    }
    
    reverse(a.begin(), a.end());

    if (b.empty()) {
        for(vector<int>::iterator it = a.begin(); it != a.end(); it++) {
            cout << *(it) << endl;
        }
    } else {
        cout << -1 << endl;
    }
}

    
